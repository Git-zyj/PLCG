#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3231841876U;
unsigned char var_2 = (unsigned char)168;
unsigned char var_4 = (unsigned char)81;
unsigned int var_5 = 4078241898U;
unsigned int var_9 = 2357607272U;
unsigned char var_10 = (unsigned char)219;
int zero = 0;
unsigned int var_12 = 2818245803U;
unsigned int var_13 = 4288567769U;
unsigned char var_14 = (unsigned char)60;
unsigned char var_15 = (unsigned char)40;
unsigned int var_16 = 3102839526U;
short var_17 = (short)3088;
unsigned char var_18 = (unsigned char)14;
unsigned int var_19 = 1935213916U;
short arr_0 [12] [12] ;
unsigned char arr_3 [21] [21] ;
short arr_4 [21] ;
short arr_6 [13] [13] ;
unsigned char arr_5 [21] ;
unsigned char arr_8 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)2986;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)21857;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-21064;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
