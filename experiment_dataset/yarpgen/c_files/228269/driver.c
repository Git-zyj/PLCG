#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)65245;
unsigned long long int var_5 = 2349311079208199775ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -3829736563013489184LL;
short var_12 = (short)-3691;
signed char var_14 = (signed char)-18;
unsigned int var_15 = 1390945366U;
unsigned int var_16 = 267974228U;
signed char var_17 = (signed char)55;
short var_18 = (short)25574;
int zero = 0;
short var_20 = (short)23139;
unsigned short var_21 = (unsigned short)16850;
unsigned short var_22 = (unsigned short)32271;
unsigned short var_23 = (unsigned short)56755;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)-77;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)21367;
int var_28 = -44503080;
unsigned int var_29 = 3064377810U;
_Bool var_30 = (_Bool)1;
unsigned short var_31 = (unsigned short)30228;
unsigned int var_32 = 3365026891U;
long long int var_33 = -6886754425922892078LL;
unsigned short var_34 = (unsigned short)55531;
_Bool var_35 = (_Bool)0;
unsigned short var_36 = (unsigned short)31751;
short var_37 = (short)10786;
unsigned int var_38 = 1745946934U;
int var_39 = 1548582217;
unsigned char var_40 = (unsigned char)74;
signed char var_41 = (signed char)125;
unsigned char var_42 = (unsigned char)241;
unsigned int var_43 = 2333615088U;
signed char var_44 = (signed char)113;
unsigned long long int var_45 = 5412427465930095737ULL;
unsigned int var_46 = 1022462281U;
int var_47 = 594461764;
_Bool var_48 = (_Bool)0;
int var_49 = -974724316;
short var_50 = (short)-5998;
signed char var_51 = (signed char)71;
short var_52 = (short)-15329;
unsigned short var_53 = (unsigned short)8388;
unsigned int var_54 = 3521363481U;
short var_55 = (short)4790;
unsigned short var_56 = (unsigned short)57587;
signed char var_57 = (signed char)18;
unsigned short var_58 = (unsigned short)26947;
unsigned short arr_2 [13] [13] [13] ;
unsigned char arr_3 [13] ;
unsigned int arr_8 [13] [13] [13] [13] [13] [13] ;
short arr_10 [13] [13] [13] [13] [13] [13] [13] ;
unsigned int arr_15 [13] ;
unsigned short arr_18 [15] ;
unsigned char arr_23 [15] [15] ;
signed char arr_30 [16] ;
_Bool arr_31 [16] ;
unsigned short arr_32 [16] ;
short arr_34 [16] [16] ;
unsigned short arr_35 [16] ;
int arr_36 [16] [16] ;
signed char arr_37 [16] [16] [16] ;
unsigned int arr_38 [16] [16] ;
long long int arr_39 [16] [16] [16] [16] [16] [16] ;
signed char arr_41 [16] [16] [16] ;
long long int arr_45 [16] [16] [16] ;
unsigned int arr_52 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)42459;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 712977298U : 4141792465U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-13098;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 2207729801U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (unsigned short)45304;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_30 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_31 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42261 : (unsigned short)4108;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_34 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-17976 : (short)-32122;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_35 [i_0] = (unsigned short)39;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_36 [i_0] [i_1] = 1002515339;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_38 [i_0] [i_1] = (i_1 % 2 == 0) ? 1303727799U : 599609958U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3548681320715132934LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)57 : (signed char)-76;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -4981396518879759968LL : -4380836105460636321LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? 3951470269U : 510101091U;
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
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
