#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -250915352;
unsigned char var_2 = (unsigned char)117;
unsigned short var_3 = (unsigned short)21748;
long long int var_7 = -8125567556871360910LL;
short var_8 = (short)21501;
int var_9 = -1725404047;
int var_11 = -1781309803;
long long int var_12 = -6898811077801641093LL;
int zero = 0;
long long int var_13 = -6262443058512979015LL;
long long int var_14 = 2793737937210720858LL;
unsigned short var_15 = (unsigned short)23322;
short var_16 = (short)-14803;
signed char var_17 = (signed char)-4;
int var_18 = -2091796840;
signed char var_19 = (signed char)-41;
long long int var_20 = 5666748054554973185LL;
unsigned long long int arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned short arr_2 [10] [10] ;
signed char arr_4 [23] ;
unsigned long long int arr_5 [23] [23] ;
short arr_9 [10] ;
unsigned long long int arr_7 [23] ;
unsigned short arr_10 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 17135293693211309056ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 7213959439737757338ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)20633;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 12644915013971413015ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)-16729;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 3683421466803593466ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)34013;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
