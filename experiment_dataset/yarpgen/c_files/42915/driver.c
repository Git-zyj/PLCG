#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1932528562;
unsigned short var_1 = (unsigned short)13392;
short var_2 = (short)7796;
short var_5 = (short)28445;
int var_6 = 1869590074;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3887374805U;
unsigned int var_16 = 1930915944U;
short var_17 = (short)22349;
int zero = 0;
int var_18 = -902312481;
unsigned int var_19 = 1072435718U;
int var_20 = 1811899934;
long long int var_21 = 8851615328454136908LL;
int arr_2 [21] [21] ;
short arr_3 [21] [21] [21] ;
unsigned int arr_7 [21] [21] [21] [21] [21] ;
unsigned int arr_12 [21] [21] [21] ;
long long int arr_13 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 34862232;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)15668;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 2162396100U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1903258016U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = -2546182143808637718LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
