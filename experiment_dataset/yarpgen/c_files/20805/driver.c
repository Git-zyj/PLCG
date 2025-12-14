#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2244630077259329620ULL;
long long int var_7 = 508584051474495379LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 3978690442862784938ULL;
unsigned long long int var_12 = 17020764553141068404ULL;
int var_13 = -706817421;
unsigned char var_14 = (unsigned char)35;
signed char var_15 = (signed char)112;
int var_16 = 1099196020;
long long int var_17 = 5034946366101042462LL;
unsigned long long int var_18 = 5270444911246087605ULL;
unsigned long long int var_19 = 17152816530394639707ULL;
unsigned int var_20 = 3529737086U;
unsigned char var_21 = (unsigned char)79;
short arr_0 [13] ;
long long int arr_1 [13] ;
_Bool arr_2 [13] [13] ;
signed char arr_6 [15] ;
signed char arr_7 [15] ;
long long int arr_8 [15] ;
_Bool arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)18587;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 4473564700306978250LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = -4198188098156149987LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
