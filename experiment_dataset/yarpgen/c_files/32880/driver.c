#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40759;
long long int var_2 = 3607586084261007217LL;
unsigned int var_6 = 1272110686U;
short var_7 = (short)-38;
long long int var_9 = -3480904166005043049LL;
int var_10 = -2085811597;
signed char var_11 = (signed char)-123;
short var_13 = (short)16728;
unsigned short var_14 = (unsigned short)40970;
int zero = 0;
int var_15 = -1245741965;
int var_16 = 873240435;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)160;
unsigned long long int arr_3 [18] [18] ;
unsigned int arr_4 [18] ;
long long int arr_7 [23] ;
_Bool arr_8 [23] ;
short arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 10291476201215810697ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 3689850904U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 7305727313143431896LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (short)-27345;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
