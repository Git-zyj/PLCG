#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3231700181U;
unsigned int var_1 = 3465363741U;
int var_2 = -1843798717;
_Bool var_3 = (_Bool)0;
long long int var_4 = 1575659537311380187LL;
short var_8 = (short)17138;
int var_11 = 1414273740;
unsigned long long int var_12 = 12708938005576773620ULL;
long long int var_13 = -8625037794128855783LL;
long long int var_14 = -1822667359492509292LL;
int var_15 = -1443018637;
long long int var_16 = 2974732267198602069LL;
long long int var_17 = 6105019703061214304LL;
int var_18 = -275441469;
int zero = 0;
signed char var_19 = (signed char)-93;
unsigned long long int var_20 = 14347556844458772916ULL;
short var_21 = (short)10095;
unsigned char var_22 = (unsigned char)58;
unsigned short var_23 = (unsigned short)60009;
unsigned short var_24 = (unsigned short)31870;
long long int var_25 = -7034383211543611598LL;
unsigned char var_26 = (unsigned char)110;
long long int var_27 = -3356372381945591480LL;
signed char var_28 = (signed char)-108;
unsigned char var_29 = (unsigned char)121;
short var_30 = (short)29789;
long long int var_31 = -738780577249452803LL;
short var_32 = (short)-17278;
unsigned short var_33 = (unsigned short)36186;
_Bool var_34 = (_Bool)0;
long long int var_35 = 4313280451837820511LL;
unsigned short var_36 = (unsigned short)34678;
long long int var_37 = -7096866671520088377LL;
short arr_0 [22] [22] ;
unsigned char arr_1 [22] [22] ;
short arr_2 [22] ;
unsigned long long int arr_3 [22] ;
long long int arr_9 [19] ;
signed char arr_13 [18] [18] ;
unsigned int arr_15 [18] ;
unsigned int arr_16 [18] [18] [18] ;
signed char arr_17 [18] ;
long long int arr_24 [18] [18] ;
int arr_28 [18] [18] [18] ;
int arr_4 [22] ;
short arr_8 [10] ;
unsigned long long int arr_18 [18] [18] [18] ;
signed char arr_21 [18] [18] [18] [18] ;
signed char arr_25 [18] [18] ;
signed char arr_26 [18] ;
long long int arr_27 [18] [18] [18] ;
signed char arr_30 [18] [18] [18] ;
_Bool arr_33 [17] ;
short arr_34 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)1816;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)-3331;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 8202779081458211626ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 6207588954708557053LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 4218214048U : 3607322759U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 2657089492U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? 8253089123678078883LL : 8133953432431954776LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1403269252 : -408866415;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 784418803;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-22395 : (short)5257;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 9587184717352349075ULL : 3189976517946726128ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)55 : (signed char)23;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)59 : (signed char)-30;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (signed char)-47 : (signed char)71;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -7618785156678108642LL : 353840998066082068LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)58 : (signed char)-68;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_33 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_34 [i_0] = (short)30364;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
