#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 112797541849274737ULL;
unsigned short var_7 = (unsigned short)42189;
unsigned long long int var_8 = 3122982198102223633ULL;
unsigned int var_11 = 3437471142U;
short var_12 = (short)24476;
unsigned char var_13 = (unsigned char)10;
_Bool var_15 = (_Bool)1;
long long int var_16 = 1679791362037284078LL;
int var_18 = 454807668;
int zero = 0;
long long int var_19 = 7445755092758769475LL;
unsigned int var_20 = 103563953U;
int var_21 = -1072553573;
long long int var_22 = -2475691818577313855LL;
short var_23 = (short)3532;
long long int arr_0 [15] ;
unsigned int arr_1 [15] [15] ;
unsigned long long int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -2107000693954786919LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 2435436463U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 5948599268059946551ULL : 15080476303969918173ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
