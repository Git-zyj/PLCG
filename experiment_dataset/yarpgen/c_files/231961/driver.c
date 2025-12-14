#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7075019734784849967LL;
int var_1 = -2081832419;
unsigned int var_2 = 2545785013U;
unsigned short var_3 = (unsigned short)39804;
int var_4 = 2066153267;
int var_5 = -1702584829;
int var_6 = -1013306117;
unsigned int var_7 = 1220768030U;
unsigned int var_8 = 4024807530U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int var_11 = 1862666492;
int var_12 = 1816502468;
_Bool var_13 = (_Bool)0;
int var_14 = -715002334;
signed char var_15 = (signed char)105;
long long int var_16 = -3802015130644703357LL;
unsigned int var_17 = 3410433545U;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1826391969U;
signed char var_20 = (signed char)40;
int var_21 = 1018493038;
int var_22 = 2105655906;
signed char var_23 = (signed char)120;
unsigned int var_24 = 351609959U;
signed char var_25 = (signed char)-70;
signed char var_26 = (signed char)-94;
int var_27 = 2125576136;
short var_28 = (short)14545;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 1804225427U;
long long int var_32 = 5528651141685920201LL;
int var_33 = -1116485198;
signed char var_34 = (signed char)97;
_Bool var_35 = (_Bool)1;
signed char var_36 = (signed char)110;
int var_37 = 1465185827;
short var_38 = (short)3720;
unsigned int var_39 = 428415182U;
int var_40 = -1546215496;
signed char var_41 = (signed char)1;
signed char var_42 = (signed char)-17;
int var_43 = -594553062;
short var_44 = (short)11667;
int var_45 = -433256152;
short var_46 = (short)-4140;
short var_47 = (short)8265;
unsigned int var_48 = 507092433U;
long long int var_49 = 8088061569317089754LL;
int var_50 = -560498442;
int var_51 = 2128998866;
_Bool var_52 = (_Bool)0;
_Bool var_53 = (_Bool)0;
unsigned short var_54 = (unsigned short)52708;
unsigned int var_55 = 1538791132U;
short var_56 = (short)2102;
short var_57 = (short)-8112;
int var_58 = 690604919;
signed char var_59 = (signed char)-70;
_Bool var_60 = (_Bool)0;
unsigned int var_61 = 768943039U;
_Bool var_62 = (_Bool)1;
unsigned int var_63 = 279559414U;
signed char var_64 = (signed char)-116;
unsigned int var_65 = 2188343303U;
signed char var_66 = (signed char)86;
short var_67 = (short)27405;
signed char arr_0 [22] [22] ;
_Bool arr_1 [22] [22] ;
unsigned int arr_2 [22] [22] ;
signed char arr_3 [22] [22] [22] ;
signed char arr_4 [22] [22] ;
_Bool arr_9 [22] [22] [22] ;
int arr_10 [23] ;
int arr_11 [23] [23] ;
_Bool arr_12 [23] ;
unsigned int arr_13 [23] ;
int arr_14 [23] [23] ;
unsigned int arr_15 [23] [23] [23] [23] ;
short arr_16 [23] ;
unsigned int arr_17 [23] [23] [23] [23] [23] [23] ;
long long int arr_18 [23] [23] [23] [23] ;
unsigned int arr_19 [23] [23] [23] [23] [23] [23] ;
_Bool arr_20 [23] [23] [23] ;
int arr_21 [23] [23] [23] [23] ;
unsigned int arr_23 [23] [23] [23] [23] ;
int arr_24 [23] [23] [23] [23] ;
unsigned short arr_25 [23] [23] [23] [23] ;
_Bool arr_27 [23] [23] [23] [23] ;
signed char arr_30 [23] ;
signed char arr_31 [23] [23] ;
long long int arr_33 [23] ;
signed char arr_35 [23] [23] [23] [23] ;
signed char arr_37 [23] [23] [23] [23] [23] ;
_Bool arr_39 [23] [23] [23] [23] ;
long long int arr_40 [23] [23] [23] ;
long long int arr_41 [23] [23] [23] [23] [23] ;
_Bool arr_42 [23] ;
unsigned int arr_43 [23] ;
unsigned int arr_51 [15] [15] [15] [15] ;
_Bool arr_56 [15] [15] [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 594423412U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-59 : (signed char)82;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)85 : (signed char)-11;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 263351704;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = 1259102797;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 176643802U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = -1800652900;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 2947499766U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (short)-14761;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 338947711U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = -3215457479403565117LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1109494071U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = -297607397;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 283666531U : 1648602741U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 1900745649;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)8271 : (unsigned short)46278;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_31 [i_0] [i_1] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = -2317088140571533644LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)55 : (signed char)-119;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)127 : (signed char)-104;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 5618430134585213717LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 939870231814877826LL : -6416260188459167436LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_42 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? 2620734213U : 2161142433U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = 100513655U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)0;
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
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
