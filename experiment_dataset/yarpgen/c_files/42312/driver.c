#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1351568900701956946ULL;
unsigned long long int var_2 = 6919602669164682333ULL;
unsigned long long int var_3 = 3729657693062836019ULL;
unsigned long long int var_4 = 5276044659069059427ULL;
unsigned short var_5 = (unsigned short)34117;
int var_6 = 872264393;
unsigned long long int var_8 = 7586849723325388648ULL;
unsigned int var_9 = 282344643U;
unsigned long long int var_10 = 8648753150695386855ULL;
unsigned int var_11 = 3996987069U;
signed char var_12 = (signed char)62;
int zero = 0;
signed char var_14 = (signed char)94;
unsigned long long int var_15 = 5801492453801477977ULL;
unsigned int var_16 = 3898332238U;
signed char var_17 = (signed char)109;
unsigned short var_18 = (unsigned short)9677;
signed char var_19 = (signed char)45;
unsigned short var_20 = (unsigned short)51166;
int var_21 = 1180933749;
unsigned long long int var_22 = 6550510635661136899ULL;
unsigned int var_23 = 1269604012U;
signed char var_24 = (signed char)45;
_Bool var_25 = (_Bool)1;
int var_26 = -1167716079;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)22259;
unsigned long long int var_30 = 13287530931742395505ULL;
long long int var_31 = 1307030281958246260LL;
unsigned int var_32 = 1350706871U;
signed char arr_0 [23] ;
unsigned short arr_1 [23] ;
int arr_2 [23] ;
long long int arr_3 [14] ;
_Bool arr_4 [14] ;
signed char arr_5 [14] ;
unsigned char arr_6 [14] ;
unsigned long long int arr_8 [14] [14] [14] ;
unsigned int arr_11 [14] [14] [14] ;
int arr_19 [14] [14] [14] ;
unsigned short arr_23 [24] ;
unsigned long long int arr_24 [24] [24] ;
short arr_25 [24] [24] [24] ;
unsigned long long int arr_26 [24] [24] ;
long long int arr_29 [24] ;
signed char arr_30 [24] ;
unsigned short arr_35 [24] [24] [24] ;
int arr_7 [14] ;
int arr_20 [14] [14] [14] ;
short arr_21 [14] [14] ;
unsigned int arr_22 [14] ;
short arr_27 [24] ;
signed char arr_28 [24] ;
signed char arr_32 [24] ;
signed char arr_33 [24] [24] ;
short arr_37 [24] ;
int arr_38 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)46438;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2108120747 : 143753846;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 2288076783685645657LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2392503540253592431ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1411612614U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 1496955115;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (unsigned short)13883;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = 1830559849040517335ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (short)-16136;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? 13948684515460172208ULL : 12163780862655269707ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? -6102842049440296933LL : 2816256942937565234LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (signed char)-122 : (signed char)61;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (unsigned short)22909;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 1873187721;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -478170045 : -1828528890;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-5337 : (short)-17798;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 3397973917U : 2337491390U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (short)18440 : (short)1980;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (signed char)-79 : (signed char)92;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (signed char)115 : (signed char)-90;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_33 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)40 : (signed char)49;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? (short)-29896 : (short)-30432;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_38 [i_0] [i_1] = (i_0 % 2 == 0) ? -52119142 : -1238743975;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
