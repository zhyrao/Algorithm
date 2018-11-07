#include <iostream>

using namespace std;

void MergeTwoArrays(int a[], int alen, int b[], int blen)
{
	int totalLen = alen + blen - 1;
	alen --;
	blen --;

	while(alen >= 0 && blen >= 0)
	{
		if (a[alen] > b[blen])
		{
			a[totalLen--] = a[alen--];
		}
		else
		{
			a[totalLen--] = b[blen--];
		}
	}

	while (alen >= 0)
	{
		a[totalLen--] = a[alen--];
	}

	while (blen >=0)
	{
		a[totalLen--] = b[blen--];
	}
}

int main()
{
	int a[] = {2,4,6,8,10, 11, 0,0,0,0,0};
	int b[] = {1,3,5,7,9};

	MergeTwoArrays(a, 6, b, 5);

	int alen = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < alen; ++i)
	{		
		/* code */
		cout<<a[i]<<endl;
	}

	return 0;
}