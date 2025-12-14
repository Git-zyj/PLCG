#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)242;
unsigned char var_2 = (unsigned char)170;
unsigned short var_3 = (unsigned short)27413;
signed char var_4 = (signed char)10;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)30668;
unsigned char var_9 = (unsigned char)103;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-62;
unsigned char var_13 = (unsigned char)93;
short var_14 = (short)-22040;
signed char var_15 = (signed char)12;
int zero = 0;
signed char var_16 = (signed char)60;
signed char var_17 = (signed char)76;
signed char var_18 = (signed char)88;
unsigned char var_19 = (unsigned char)95;
unsigned char var_20 = (unsigned char)233;
short var_21 = (short)19468;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)28646;
unsigned char var_24 = (unsigned char)53;
unsigned char arr_0 [21] ;
short arr_1 [21] [21] ;
signed char arr_4 [19] ;
_Bool arr_7 [25] [25] ;
short arr_8 [25] ;
signed char arr_2 [21] ;
signed char arr_5 [19] ;
_Bool arr_6 [19] ;
signed char arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)25767;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-15017 : (short)15482;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)45 : (signed char)58;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
