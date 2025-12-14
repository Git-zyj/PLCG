#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30013;
signed char var_3 = (signed char)24;
signed char var_5 = (signed char)-125;
signed char var_7 = (signed char)66;
unsigned int var_8 = 56509109U;
unsigned short var_11 = (unsigned short)39505;
unsigned short var_13 = (unsigned short)46762;
unsigned short var_14 = (unsigned short)62284;
unsigned short var_16 = (unsigned short)60886;
unsigned short var_17 = (unsigned short)52987;
int zero = 0;
signed char var_19 = (signed char)127;
signed char var_20 = (signed char)96;
unsigned short var_21 = (unsigned short)54320;
unsigned int var_22 = 3399463106U;
unsigned short var_23 = (unsigned short)11628;
unsigned short var_24 = (unsigned short)14000;
unsigned short var_25 = (unsigned short)1167;
signed char var_26 = (signed char)97;
unsigned short var_27 = (unsigned short)30997;
unsigned int var_28 = 1466428728U;
unsigned int var_29 = 1776809486U;
unsigned int var_30 = 1469121700U;
unsigned int var_31 = 1034310034U;
signed char arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
signed char arr_3 [16] [16] ;
unsigned int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)50528;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 189534633U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
