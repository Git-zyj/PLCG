#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)69;
unsigned char var_2 = (unsigned char)148;
unsigned char var_4 = (unsigned char)5;
unsigned short var_6 = (unsigned short)7630;
unsigned short var_9 = (unsigned short)45153;
unsigned long long int var_13 = 12573692634555917775ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)230;
unsigned char var_15 = (unsigned char)63;
unsigned char var_16 = (unsigned char)24;
unsigned short var_17 = (unsigned short)61379;
unsigned char var_18 = (unsigned char)92;
unsigned long long int var_19 = 16910381173768755503ULL;
unsigned char var_20 = (unsigned char)202;
unsigned char arr_0 [11] [11] ;
unsigned short arr_4 [11] ;
unsigned short arr_5 [11] [11] ;
unsigned short arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)64288;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)42348 : (unsigned short)33164;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)30528 : (unsigned short)46301;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
