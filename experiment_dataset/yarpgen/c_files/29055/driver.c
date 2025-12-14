#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)45516;
short var_3 = (short)-32305;
unsigned long long int var_5 = 12418741241306202980ULL;
long long int var_6 = 5543054955766726189LL;
unsigned int var_7 = 4072702873U;
unsigned short var_8 = (unsigned short)64889;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)16007;
unsigned short var_12 = (unsigned short)41352;
unsigned short var_13 = (unsigned short)28102;
int zero = 0;
unsigned int var_14 = 2791302010U;
unsigned long long int var_15 = 10166438780276547680ULL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)183;
unsigned long long int var_18 = 11315251777241187205ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 11393323367908446303ULL;
unsigned short arr_1 [15] ;
unsigned char arr_4 [16] ;
unsigned char arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)65409;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)152;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
