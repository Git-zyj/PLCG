#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2218373940974272330ULL;
unsigned char var_2 = (unsigned char)134;
short var_8 = (short)-31231;
short var_14 = (short)-3992;
int zero = 0;
unsigned int var_17 = 1667986633U;
short var_18 = (short)19821;
signed char var_19 = (signed char)76;
unsigned char var_20 = (unsigned char)227;
unsigned char var_21 = (unsigned char)10;
short var_22 = (short)22489;
unsigned char var_23 = (unsigned char)154;
unsigned char var_24 = (unsigned char)203;
unsigned char var_25 = (unsigned char)44;
signed char var_26 = (signed char)111;
signed char arr_0 [15] [15] ;
short arr_1 [15] ;
short arr_3 [15] [15] ;
unsigned char arr_6 [18] ;
unsigned long long int arr_7 [18] ;
unsigned int arr_4 [15] [15] ;
signed char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-45 : (signed char)-122;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)3102;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-30583;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)242 : (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 2155119847324771379ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 2206756248U : 1605637020U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)30 : (signed char)115;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
