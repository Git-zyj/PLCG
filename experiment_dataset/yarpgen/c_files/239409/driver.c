#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
long long int var_1 = -7764458650311359085LL;
unsigned short var_3 = (unsigned short)34609;
long long int var_4 = 7615655650573584941LL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)2174;
long long int var_7 = 5630715827056872635LL;
signed char var_8 = (signed char)7;
_Bool var_9 = (_Bool)0;
long long int var_12 = 8815199853802011759LL;
_Bool var_13 = (_Bool)0;
int var_14 = 783200076;
int zero = 0;
long long int var_15 = -3891883426708525420LL;
unsigned short var_16 = (unsigned short)1100;
unsigned char var_17 = (unsigned char)120;
long long int var_18 = 4151074210262287288LL;
_Bool var_19 = (_Bool)0;
long long int var_20 = -4804625140281734176LL;
signed char var_21 = (signed char)112;
short var_22 = (short)29439;
long long int arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
unsigned char arr_2 [10] [10] ;
_Bool arr_3 [10] ;
_Bool arr_4 [10] ;
unsigned int arr_6 [15] ;
unsigned long long int arr_9 [17] [17] ;
unsigned short arr_10 [17] [17] ;
int arr_11 [17] [17] ;
long long int arr_12 [17] ;
short arr_5 [10] ;
unsigned long long int arr_13 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = -2022802853941171536LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 5182447949326398664ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2714911065U : 1148607352U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 9303878262637780279ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)5459;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? -2069990801 : -1164709532;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -8029152537848409515LL : 8247244109719543116LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)15496;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 3027253549044754336ULL : 16793995581820691856ULL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
