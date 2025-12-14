#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)91;
unsigned char var_2 = (unsigned char)24;
short var_4 = (short)-24302;
unsigned int var_5 = 2212284078U;
unsigned int var_7 = 1789204608U;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)233;
signed char var_12 = (signed char)72;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1311629094U;
unsigned short var_17 = (unsigned short)55145;
int var_18 = 591069386;
signed char var_19 = (signed char)-44;
int zero = 0;
unsigned short var_20 = (unsigned short)41864;
unsigned char var_21 = (unsigned char)84;
_Bool var_22 = (_Bool)1;
long long int var_23 = -8813806437558930589LL;
unsigned char var_24 = (unsigned char)191;
_Bool var_25 = (_Bool)1;
unsigned char arr_0 [16] ;
unsigned long long int arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 5644255875001069104ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
