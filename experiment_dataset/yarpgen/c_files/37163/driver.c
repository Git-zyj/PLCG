#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12921;
long long int var_1 = 6555651801239365275LL;
_Bool var_2 = (_Bool)0;
unsigned int var_6 = 543051060U;
unsigned long long int var_7 = 6917567404725747694ULL;
unsigned short var_8 = (unsigned short)7557;
short var_9 = (short)-4126;
signed char var_11 = (signed char)111;
unsigned long long int var_13 = 850145665420805059ULL;
short var_15 = (short)18853;
int var_17 = -1898588231;
int zero = 0;
unsigned short var_19 = (unsigned short)62920;
long long int var_20 = -3534132128459126048LL;
long long int var_21 = 5327100084505559055LL;
unsigned char var_22 = (unsigned char)222;
unsigned char var_23 = (unsigned char)111;
short var_24 = (short)2878;
signed char var_25 = (signed char)15;
unsigned short var_26 = (unsigned short)32396;
signed char var_27 = (signed char)-8;
int arr_0 [20] [20] ;
long long int arr_1 [20] ;
short arr_2 [20] ;
unsigned char arr_3 [20] ;
unsigned char arr_5 [10] ;
int arr_6 [10] ;
unsigned short arr_7 [10] ;
unsigned char arr_4 [20] ;
unsigned int arr_10 [17] ;
unsigned short arr_11 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? -1027128636 : -1969086025;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 5686655030933313061LL : -973782422359579220LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)-31384;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)62 : (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -892288693;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)16327;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)28 : (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 1164584431U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)37889;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
