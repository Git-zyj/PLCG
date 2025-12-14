#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)219;
unsigned int var_3 = 108991968U;
short var_5 = (short)3548;
signed char var_6 = (signed char)98;
unsigned int var_7 = 4276933954U;
unsigned char var_8 = (unsigned char)251;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_16 = 3437731093033302881LL;
unsigned char var_17 = (unsigned char)102;
unsigned int var_18 = 393966479U;
unsigned int var_19 = 71063355U;
short var_20 = (short)6230;
unsigned char var_21 = (unsigned char)25;
unsigned int var_22 = 1544367759U;
unsigned int var_23 = 3251577417U;
unsigned short var_24 = (unsigned short)45492;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 469079182U;
short var_27 = (short)-18318;
unsigned short var_28 = (unsigned short)58642;
unsigned int var_29 = 1557402360U;
unsigned long long int arr_0 [15] [15] ;
unsigned int arr_1 [15] [15] ;
unsigned int arr_7 [25] ;
long long int arr_10 [25] [25] [25] ;
_Bool arr_11 [25] [25] ;
short arr_12 [25] [25] ;
_Bool arr_13 [16] ;
unsigned short arr_2 [15] ;
_Bool arr_5 [15] ;
unsigned short arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 4624691622938519162ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 4177501558U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 2186031067U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 3017480042353989990LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (short)20867;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)46466;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29659 : (unsigned short)18314;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
