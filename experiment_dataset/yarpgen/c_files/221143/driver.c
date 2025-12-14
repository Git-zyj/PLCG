#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1721413252U;
unsigned short var_1 = (unsigned short)17840;
short var_2 = (short)-11270;
int var_3 = 1903077350;
short var_4 = (short)23119;
long long int var_5 = 3483986685530706147LL;
int var_6 = -1287618304;
long long int var_7 = -1845478070675974613LL;
long long int var_8 = -6521925132316655179LL;
unsigned short var_9 = (unsigned short)43262;
signed char var_10 = (signed char)94;
unsigned short var_11 = (unsigned short)11248;
unsigned short var_12 = (unsigned short)64432;
int zero = 0;
long long int var_13 = -2899808904499405231LL;
unsigned int var_14 = 3965605893U;
short var_15 = (short)-13420;
unsigned long long int var_16 = 3354230640095051446ULL;
unsigned int var_17 = 2738689195U;
unsigned char var_18 = (unsigned char)162;
int var_19 = 2106452461;
int var_20 = 418090357;
short var_21 = (short)-17428;
long long int var_22 = -125710530591173831LL;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)3490;
signed char var_25 = (signed char)-105;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)115;
unsigned int var_28 = 344827926U;
unsigned int var_29 = 2337272412U;
int var_30 = 959746302;
unsigned long long int var_31 = 8617731712896345935ULL;
short var_32 = (short)7618;
unsigned int var_33 = 2651668231U;
long long int var_34 = 7645066113844753690LL;
unsigned short var_35 = (unsigned short)64197;
int var_36 = 1649364023;
signed char arr_0 [23] ;
unsigned short arr_1 [23] ;
short arr_2 [13] ;
unsigned short arr_3 [13] ;
unsigned int arr_5 [13] [13] ;
unsigned int arr_6 [13] ;
unsigned char arr_8 [13] [13] [13] [13] ;
signed char arr_9 [13] [13] [13] [13] ;
signed char arr_10 [13] [13] [13] [13] ;
signed char arr_11 [13] [13] [13] ;
unsigned char arr_16 [13] [13] [13] [13] [13] ;
unsigned long long int arr_25 [13] [13] [13] [13] [13] ;
int arr_30 [14] ;
signed char arr_32 [14] ;
unsigned char arr_36 [16] ;
unsigned short arr_38 [16] ;
unsigned int arr_39 [16] ;
unsigned long long int arr_40 [16] ;
unsigned int arr_4 [13] [13] ;
short arr_12 [13] [13] [13] [13] [13] [13] ;
short arr_13 [13] [13] ;
unsigned char arr_17 [13] ;
int arr_18 [13] ;
short arr_21 [13] [13] [13] [13] ;
unsigned short arr_27 [13] [13] ;
unsigned long long int arr_28 [13] ;
unsigned short arr_33 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)12695;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)1622;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)53531;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 4066043155U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2404192809U : 559393035U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)101 : (signed char)-3;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-103 : (signed char)71;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)135 : (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = 5471797130415939609ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_30 [i_0] = -1566331890;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_32 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_36 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_38 [i_0] = (unsigned short)48416;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? 2064582256U : 884847984U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? 17116778120594950701ULL : 17983368163024828420ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 478770740U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (short)-6020 : (short)-3810;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-20371 : (short)-20603;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)252 : (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? -1007119976 : -508149178;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)26550 : (short)6528;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)37982 : (unsigned short)43767;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = 14259304215795195193ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_33 [i_0] = (unsigned short)29068;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
