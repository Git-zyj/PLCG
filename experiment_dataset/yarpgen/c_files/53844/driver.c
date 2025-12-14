#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1338748687511290926ULL;
unsigned char var_1 = (unsigned char)253;
unsigned int var_2 = 1930967734U;
int var_3 = 867242498;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 137756397U;
unsigned char var_7 = (unsigned char)179;
unsigned int var_9 = 3968823034U;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)8;
unsigned long long int var_17 = 15758925465546306521ULL;
short var_18 = (short)-23952;
int var_19 = 1845510550;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 3054681932018228642ULL;
unsigned int var_22 = 1419189811U;
unsigned long long int var_23 = 3864057855818556775ULL;
unsigned long long int arr_1 [24] ;
unsigned int arr_4 [24] [24] ;
int arr_5 [24] [24] ;
int arr_7 [24] [24] [24] [24] ;
short arr_12 [16] ;
unsigned int arr_8 [24] [24] [24] ;
int arr_9 [24] ;
short arr_14 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 8139334429909053649ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 1650271117U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 1007906772;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 223574206 : -939959105;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (short)-12689;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1992883262U : 562304237U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = -713036070;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)-19556 : (short)-20583;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
