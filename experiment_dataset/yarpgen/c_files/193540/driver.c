#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)254;
unsigned char var_6 = (unsigned char)253;
unsigned char var_7 = (unsigned char)52;
signed char var_8 = (signed char)43;
long long int var_10 = -269280268148232715LL;
int zero = 0;
int var_11 = 1126538270;
unsigned short var_12 = (unsigned short)4411;
unsigned short var_13 = (unsigned short)2258;
short var_14 = (short)-22293;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1382497140U;
unsigned char arr_0 [22] ;
unsigned short arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)109 : (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5512 : (unsigned short)48986;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
