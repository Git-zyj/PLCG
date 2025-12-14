#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3042395440U;
int var_3 = -2015233387;
short var_4 = (short)13091;
unsigned short var_5 = (unsigned short)62825;
unsigned long long int var_7 = 17961339028087859258ULL;
unsigned char var_11 = (unsigned char)211;
unsigned long long int var_12 = 4098079014691092640ULL;
unsigned char var_13 = (unsigned char)30;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 4785057076171297610ULL;
int zero = 0;
unsigned int var_16 = 2895945264U;
short var_17 = (short)28852;
unsigned int var_18 = 497397994U;
unsigned int var_19 = 3347546508U;
short var_20 = (short)-5482;
unsigned long long int arr_4 [23] [23] [23] ;
int arr_5 [23] ;
unsigned long long int arr_10 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 15859940904967944064ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = -546437657;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 11349526794538133096ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
