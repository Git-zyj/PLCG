#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23918;
unsigned char var_3 = (unsigned char)223;
short var_5 = (short)-30574;
short var_6 = (short)-11576;
short var_12 = (short)4367;
int zero = 0;
unsigned char var_15 = (unsigned char)5;
unsigned char var_16 = (unsigned char)29;
short var_17 = (short)-7419;
unsigned char var_18 = (unsigned char)232;
short var_19 = (short)3028;
unsigned char var_20 = (unsigned char)106;
unsigned char var_21 = (unsigned char)15;
short var_22 = (short)-32417;
short var_23 = (short)-15022;
short var_24 = (short)18714;
unsigned char var_25 = (unsigned char)64;
unsigned char var_26 = (unsigned char)173;
short arr_0 [13] [13] ;
short arr_1 [13] ;
unsigned char arr_2 [13] ;
unsigned char arr_3 [13] [13] ;
short arr_6 [13] [13] ;
unsigned char arr_8 [13] ;
unsigned char arr_11 [11] ;
short arr_12 [11] [11] ;
short arr_13 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)18378;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)7052;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-5155;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (short)29613;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (short)31474;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
