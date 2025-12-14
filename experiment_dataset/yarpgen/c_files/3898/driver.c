#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5111294189062464779ULL;
long long int var_3 = -6432096803478716431LL;
unsigned char var_9 = (unsigned char)179;
_Bool var_10 = (_Bool)1;
short var_12 = (short)19940;
short var_13 = (short)7824;
long long int var_14 = -3639097477616516928LL;
signed char var_15 = (signed char)-102;
int zero = 0;
unsigned int var_16 = 533433613U;
unsigned char var_17 = (unsigned char)131;
unsigned char var_18 = (unsigned char)250;
_Bool var_19 = (_Bool)1;
short var_20 = (short)14102;
int var_21 = -1170710915;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)40877;
long long int arr_0 [23] ;
unsigned short arr_8 [14] [14] ;
unsigned char arr_9 [14] ;
int arr_10 [14] ;
unsigned long long int arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -6444809865694888902LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)29647;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1333521284 : -691490318;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 4657903794039447772ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
