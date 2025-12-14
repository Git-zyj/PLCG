#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)138;
unsigned char var_2 = (unsigned char)158;
unsigned long long int var_3 = 3489508028611018432ULL;
unsigned short var_4 = (unsigned short)18447;
unsigned char var_5 = (unsigned char)200;
short var_6 = (short)16954;
unsigned char var_9 = (unsigned char)213;
signed char var_10 = (signed char)16;
unsigned long long int var_11 = 6685771619244163569ULL;
short var_12 = (short)12197;
signed char var_13 = (signed char)-80;
unsigned int var_15 = 1596225695U;
int var_16 = -402954380;
short var_17 = (short)9493;
int zero = 0;
signed char var_18 = (signed char)-31;
unsigned char var_19 = (unsigned char)230;
signed char var_20 = (signed char)-104;
short var_21 = (short)-21247;
unsigned int var_22 = 3435058459U;
short var_23 = (short)-30666;
int var_24 = -2002613410;
short var_25 = (short)27916;
unsigned long long int var_26 = 17847491863906076415ULL;
signed char var_27 = (signed char)-111;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)115;
unsigned short var_30 = (unsigned short)12214;
short var_31 = (short)-21507;
signed char var_32 = (signed char)54;
int var_33 = 628706380;
_Bool var_34 = (_Bool)0;
_Bool var_35 = (_Bool)0;
short var_36 = (short)-23359;
unsigned short arr_0 [13] ;
unsigned short arr_1 [13] ;
unsigned short arr_2 [13] [13] ;
signed char arr_3 [13] ;
unsigned long long int arr_7 [20] ;
signed char arr_8 [20] [20] [20] ;
unsigned long long int arr_9 [20] [20] [20] ;
unsigned short arr_12 [13] ;
unsigned char arr_18 [13] ;
signed char arr_28 [19] ;
unsigned char arr_29 [19] [19] [19] ;
unsigned long long int arr_30 [19] [19] ;
short arr_31 [19] [19] ;
unsigned int arr_4 [13] ;
signed char arr_5 [13] [13] ;
short arr_10 [20] ;
signed char arr_15 [13] [13] ;
unsigned int arr_20 [13] ;
unsigned long long int arr_32 [19] ;
signed char arr_35 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)13276;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)34924;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)23286;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 5867441860229326135ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 11178281063098517753ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (unsigned short)5105;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_30 [i_0] [i_1] = 1616276883650378996ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_31 [i_0] [i_1] = (short)-25089;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 911595305U : 484868118U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)106 : (signed char)104;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (short)-8798;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 2219489022U : 2620686239U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_32 [i_0] = 2637353048024357463ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (signed char)95;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
