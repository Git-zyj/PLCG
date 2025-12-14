#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23851;
short var_1 = (short)-3236;
unsigned int var_2 = 1073406698U;
short var_3 = (short)-11254;
long long int var_5 = -5379582436531511961LL;
unsigned int var_7 = 680477438U;
unsigned int var_8 = 3347765852U;
int zero = 0;
long long int var_12 = 5360470782820763721LL;
long long int var_13 = -5488716014975092762LL;
short var_14 = (short)-2413;
unsigned int var_15 = 1771575897U;
unsigned int var_16 = 3622763624U;
unsigned int var_17 = 3288244896U;
long long int arr_0 [16] [16] ;
short arr_1 [16] ;
long long int arr_5 [16] ;
unsigned int arr_8 [16] [16] [16] ;
long long int arr_14 [16] [16] [16] [16] ;
short arr_3 [16] ;
long long int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 4060445735384736313LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)12566;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -3337205264262780535LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 184962934U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -5029607743954502576LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)6271;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -2513422489574542543LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
