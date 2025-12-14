#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1519124091959050542ULL;
short var_1 = (short)-14269;
unsigned char var_3 = (unsigned char)73;
int var_4 = 2050876892;
unsigned char var_5 = (unsigned char)160;
unsigned int var_7 = 629473765U;
int var_11 = -2105344829;
unsigned long long int var_12 = 2550373564129737824ULL;
unsigned char var_13 = (unsigned char)8;
unsigned long long int var_15 = 11271816064625806336ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)35;
int var_17 = 1047888365;
unsigned short var_18 = (unsigned short)50507;
unsigned short var_19 = (unsigned short)21321;
unsigned char arr_0 [18] ;
_Bool arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
