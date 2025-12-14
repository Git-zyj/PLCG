#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31683;
unsigned short var_1 = (unsigned short)64979;
unsigned short var_2 = (unsigned short)19368;
int var_3 = 404244520;
unsigned long long int var_4 = 12691508053372777909ULL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)78;
unsigned short var_7 = (unsigned short)42792;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 4980077302741741ULL;
unsigned int var_10 = 1721525766U;
unsigned long long int var_12 = 5528812961723105253ULL;
int var_13 = 317660285;
unsigned short var_15 = (unsigned short)43863;
unsigned char var_16 = (unsigned char)110;
unsigned char var_17 = (unsigned char)62;
unsigned short var_18 = (unsigned short)29604;
unsigned short var_19 = (unsigned short)63522;
int zero = 0;
unsigned long long int var_20 = 9149811471118581005ULL;
unsigned short var_21 = (unsigned short)56873;
unsigned long long int var_22 = 13367470296065210884ULL;
int var_23 = 1390387547;
unsigned short var_24 = (unsigned short)58747;
_Bool var_25 = (_Bool)0;
long long int var_26 = 5167167732575319097LL;
unsigned int var_27 = 1049277369U;
unsigned long long int var_28 = 4063263345218118505ULL;
signed char var_29 = (signed char)30;
signed char var_30 = (signed char)-51;
unsigned char var_31 = (unsigned char)104;
int var_32 = 802650205;
signed char var_33 = (signed char)-45;
_Bool var_34 = (_Bool)0;
unsigned char var_35 = (unsigned char)56;
short var_36 = (short)-24555;
int var_37 = 1863135157;
_Bool arr_2 [18] ;
short arr_21 [19] [19] [19] [19] [19] [19] [19] ;
unsigned char arr_26 [19] [19] [19] ;
_Bool arr_30 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-7463;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_30 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
