#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_7 = (unsigned char)221;
_Bool var_8 = (_Bool)0;
short var_11 = (short)28631;
unsigned int var_12 = 2628510761U;
unsigned char var_13 = (unsigned char)24;
int zero = 0;
unsigned char var_16 = (unsigned char)126;
short var_17 = (short)-7313;
unsigned short var_18 = (unsigned short)20132;
unsigned short var_19 = (unsigned short)41317;
_Bool var_20 = (_Bool)0;
short var_21 = (short)21711;
unsigned long long int var_22 = 18192852017472323126ULL;
unsigned char var_23 = (unsigned char)149;
unsigned int var_24 = 2674250882U;
unsigned short var_25 = (unsigned short)2338;
unsigned int arr_0 [14] ;
short arr_5 [16] ;
short arr_6 [16] ;
unsigned short arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1845961987U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)-24182;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (short)-8459;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned short)37134;
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
