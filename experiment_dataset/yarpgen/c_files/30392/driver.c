#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)31;
int var_6 = 253948711;
int var_7 = -1047662262;
unsigned int var_10 = 414274129U;
unsigned char var_11 = (unsigned char)126;
short var_12 = (short)-24653;
int zero = 0;
unsigned char var_13 = (unsigned char)252;
short var_14 = (short)2164;
unsigned char var_15 = (unsigned char)96;
int var_16 = -603294477;
int var_17 = 2094577290;
unsigned int var_18 = 1394936102U;
unsigned char var_19 = (unsigned char)19;
signed char var_20 = (signed char)116;
signed char var_21 = (signed char)-82;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)33469;
int var_24 = 2141028367;
unsigned char arr_0 [12] ;
short arr_1 [12] [12] ;
short arr_4 [19] ;
unsigned char arr_5 [19] [19] ;
signed char arr_7 [15] ;
unsigned char arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-13490;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)14346;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)244;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
