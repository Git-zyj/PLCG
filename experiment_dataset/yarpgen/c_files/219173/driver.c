#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2417100239438641043ULL;
signed char var_1 = (signed char)114;
int var_2 = -2071561226;
int var_3 = 1494013342;
int var_4 = -9730211;
unsigned short var_5 = (unsigned short)37355;
unsigned char var_6 = (unsigned char)252;
unsigned long long int var_7 = 14228202376149905057ULL;
signed char var_8 = (signed char)64;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)31;
signed char var_13 = (signed char)-80;
unsigned long long int var_15 = 10023017633783808623ULL;
int zero = 0;
signed char var_16 = (signed char)-94;
unsigned char var_17 = (unsigned char)112;
unsigned int var_18 = 2437764928U;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 1763334714173937408ULL;
unsigned long long int var_23 = 7664533474930304979ULL;
signed char var_24 = (signed char)-107;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)34;
long long int var_27 = 4570788622855133979LL;
signed char var_28 = (signed char)-117;
short var_29 = (short)11221;
signed char var_30 = (signed char)-22;
unsigned int var_31 = 2405086216U;
unsigned long long int var_32 = 8612265678590346858ULL;
unsigned short var_33 = (unsigned short)61926;
unsigned int var_34 = 3644114312U;
_Bool var_35 = (_Bool)0;
unsigned long long int var_36 = 2972885621120474769ULL;
unsigned int var_37 = 2569444338U;
_Bool var_38 = (_Bool)1;
unsigned int var_39 = 4201298057U;
signed char var_40 = (signed char)-5;
_Bool var_41 = (_Bool)1;
unsigned char var_42 = (unsigned char)238;
unsigned short var_43 = (unsigned short)13266;
_Bool var_44 = (_Bool)0;
short var_45 = (short)-11066;
unsigned short var_46 = (unsigned short)52623;
unsigned short var_47 = (unsigned short)12833;
unsigned char var_48 = (unsigned char)157;
short var_49 = (short)18082;
unsigned int var_50 = 620855230U;
unsigned short var_51 = (unsigned short)53169;
long long int var_52 = 8630666428210340372LL;
unsigned short arr_0 [24] ;
unsigned short arr_1 [24] [24] ;
int arr_2 [24] [24] ;
unsigned char arr_3 [24] ;
unsigned long long int arr_4 [24] [24] [24] ;
unsigned short arr_5 [24] ;
int arr_7 [24] [24] ;
int arr_8 [24] ;
unsigned int arr_11 [24] [24] [24] [24] [24] [24] ;
int arr_13 [24] [24] ;
unsigned short arr_14 [24] [24] [24] ;
long long int arr_15 [24] [24] [24] [24] ;
unsigned long long int arr_16 [24] [24] [24] [24] ;
signed char arr_18 [24] [24] [24] [24] ;
unsigned char arr_20 [24] [24] [24] [24] [24] [24] [24] ;
short arr_28 [24] ;
int arr_31 [24] [24] [24] [24] [24] ;
short arr_33 [24] [24] [24] [24] ;
long long int arr_41 [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)7212;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)56003;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 1001058172;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 12181561062387166045ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)61414;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -1337281047 : -854733830;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 744060130;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4110643104U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = 1435168127;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)37586;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 1169504142848517263LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 10725433821708766620ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-82 : (signed char)-52;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? (unsigned char)253 : (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_28 [i_0] = (short)18817;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -1651812892 : -1582112168;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-4287 : (short)-30068;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 621817847218363214LL : 3388091871195750354LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
