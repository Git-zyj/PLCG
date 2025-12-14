#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8908;
short var_1 = (short)23784;
unsigned char var_2 = (unsigned char)86;
short var_3 = (short)-23675;
int var_5 = -1714066045;
unsigned char var_8 = (unsigned char)130;
unsigned char var_9 = (unsigned char)33;
int zero = 0;
unsigned char var_11 = (unsigned char)249;
int var_12 = 1296159687;
int var_13 = 1682396559;
short var_14 = (short)2888;
int var_15 = -604796998;
unsigned char var_16 = (unsigned char)148;
unsigned char var_17 = (unsigned char)85;
int arr_0 [24] ;
int arr_1 [24] [24] ;
short arr_2 [24] [24] ;
unsigned char arr_4 [13] ;
int arr_5 [13] ;
short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -167795928;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -539857528;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-25443;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = -2007525211;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-25092;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
