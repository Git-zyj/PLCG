#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4993307616816290626LL;
int var_1 = -1197280304;
unsigned int var_2 = 990464051U;
unsigned short var_5 = (unsigned short)43250;
short var_7 = (short)-11068;
short var_8 = (short)28848;
unsigned char var_9 = (unsigned char)233;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)81;
unsigned char var_12 = (unsigned char)59;
int zero = 0;
unsigned char var_14 = (unsigned char)240;
signed char var_15 = (signed char)75;
unsigned char var_16 = (unsigned char)197;
long long int var_17 = 4198401291903383983LL;
unsigned int var_18 = 1842479959U;
signed char var_19 = (signed char)-48;
signed char var_20 = (signed char)-112;
int var_21 = -150710849;
signed char var_22 = (signed char)-91;
short var_23 = (short)-16019;
_Bool arr_0 [11] [11] ;
short arr_2 [11] ;
_Bool arr_5 [11] [11] [11] ;
unsigned int arr_6 [11] ;
signed char arr_7 [11] ;
unsigned int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)-1345;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 2715801663U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)74 : (signed char)29;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 650334184U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
