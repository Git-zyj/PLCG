#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9534;
short var_2 = (short)23038;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1456135909U;
int var_7 = -1022199490;
unsigned short var_8 = (unsigned short)30842;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-9336;
long long int var_12 = 3215309774081959901LL;
unsigned short var_13 = (unsigned short)17658;
_Bool var_14 = (_Bool)1;
short var_16 = (short)13231;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)165;
unsigned long long int var_19 = 16332670111743806873ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)147;
long long int var_22 = -6205231880252405459LL;
unsigned short var_23 = (unsigned short)10006;
unsigned char var_24 = (unsigned char)134;
_Bool var_25 = (_Bool)0;
unsigned int var_26 = 2440111413U;
unsigned char var_27 = (unsigned char)121;
unsigned short var_28 = (unsigned short)40607;
_Bool var_29 = (_Bool)0;
unsigned short var_30 = (unsigned short)42967;
_Bool var_31 = (_Bool)1;
_Bool var_32 = (_Bool)0;
unsigned char var_33 = (unsigned char)13;
unsigned short var_34 = (unsigned short)58932;
unsigned char arr_0 [15] ;
unsigned char arr_1 [15] ;
short arr_2 [15] [15] ;
unsigned short arr_10 [10] ;
unsigned short arr_3 [15] ;
short arr_14 [10] ;
_Bool arr_32 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (short)20988;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned short)3484;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)12714;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)6473 : (short)-2319;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_32 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
