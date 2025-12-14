#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
unsigned short var_1 = (unsigned short)33575;
unsigned char var_2 = (unsigned char)36;
int var_4 = -765562227;
unsigned short var_5 = (unsigned short)55201;
unsigned int var_6 = 447593640U;
unsigned long long int var_7 = 6489492193674942149ULL;
signed char var_8 = (signed char)118;
int var_9 = 969410129;
unsigned long long int var_10 = 2255741804094248480ULL;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)249;
int zero = 0;
signed char var_15 = (signed char)63;
signed char var_16 = (signed char)-127;
unsigned long long int var_17 = 14789313949553488676ULL;
int var_18 = 1587933442;
int var_19 = -710762979;
unsigned int arr_0 [24] ;
unsigned int arr_2 [24] ;
unsigned long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3626437827U : 2460228969U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 164132151U : 1087316369U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 911614646562315948ULL : 14014699564310745780ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
