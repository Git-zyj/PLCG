#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
signed char var_10 = (signed char)-53;
unsigned char var_12 = (unsigned char)187;
int zero = 0;
unsigned char var_13 = (unsigned char)110;
unsigned short var_14 = (unsigned short)33284;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1891323567U;
unsigned short var_17 = (unsigned short)46835;
unsigned short var_18 = (unsigned short)13835;
signed char var_19 = (signed char)64;
long long int var_20 = 8510763162915577087LL;
unsigned long long int var_21 = 8981947055224394545ULL;
short var_22 = (short)-11583;
short var_23 = (short)15722;
unsigned char var_24 = (unsigned char)233;
signed char var_25 = (signed char)52;
int var_26 = 128873688;
unsigned char var_27 = (unsigned char)149;
_Bool var_28 = (_Bool)0;
unsigned int var_29 = 1548757727U;
unsigned char var_30 = (unsigned char)160;
short var_31 = (short)9891;
_Bool var_32 = (_Bool)1;
unsigned char var_33 = (unsigned char)125;
unsigned long long int var_34 = 4556432179976077490ULL;
unsigned char var_35 = (unsigned char)96;
unsigned char var_36 = (unsigned char)110;
unsigned char var_37 = (unsigned char)147;
unsigned short var_38 = (unsigned short)6657;
unsigned char var_39 = (unsigned char)53;
unsigned char var_40 = (unsigned char)157;
unsigned char var_41 = (unsigned char)55;
int var_42 = -893177099;
unsigned char var_43 = (unsigned char)139;
signed char var_44 = (signed char)-56;
long long int var_45 = -5077025479189216315LL;
int var_46 = -271396838;
int var_47 = 669478412;
unsigned long long int var_48 = 12118105748908002020ULL;
unsigned int var_49 = 2175273650U;
int var_50 = -1719008070;
short arr_0 [11] [11] ;
unsigned short arr_1 [11] [11] ;
long long int arr_8 [11] [11] [11] ;
short arr_56 [23] ;
signed char arr_4 [11] [11] ;
unsigned short arr_9 [11] [11] ;
_Bool arr_21 [11] [11] [11] ;
long long int arr_44 [11] ;
_Bool arr_45 [11] ;
unsigned char arr_52 [11] ;
short arr_62 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-2888;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)2503;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -2155427787879255066LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_56 [i_0] = (short)8040;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)59740;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_44 [i_0] = 4785190128140260326LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_45 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_52 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_62 [i_0] = (short)30287;
}

void checksum() {
    hash(&seed, var_13);
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_62 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
