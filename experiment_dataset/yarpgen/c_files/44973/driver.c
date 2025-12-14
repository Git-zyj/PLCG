#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5936;
unsigned int var_1 = 3269071232U;
signed char var_2 = (signed char)53;
unsigned long long int var_4 = 13018992468846949795ULL;
unsigned int var_5 = 4249556475U;
signed char var_6 = (signed char)82;
unsigned char var_9 = (unsigned char)54;
int zero = 0;
unsigned int var_11 = 1124836110U;
long long int var_12 = 4491073456633105505LL;
short var_13 = (short)18051;
short var_14 = (short)-22470;
unsigned int arr_0 [12] ;
int arr_1 [12] ;
unsigned long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2012544837U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1775426959 : 1626837058;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 9323604529514571593ULL : 574913320275076720ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
