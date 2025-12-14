#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1549125564;
int var_1 = 1251858610;
unsigned long long int var_3 = 2197128321927949974ULL;
long long int var_4 = -8014784864557132773LL;
unsigned char var_6 = (unsigned char)119;
_Bool var_7 = (_Bool)0;
int var_8 = 1306398803;
unsigned short var_9 = (unsigned short)22617;
short var_11 = (short)-14879;
unsigned long long int var_12 = 8278960613418515368ULL;
long long int var_13 = -5830627396604258299LL;
long long int var_14 = -7657742705098876316LL;
short var_15 = (short)-19843;
unsigned short var_16 = (unsigned short)59831;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)237;
int zero = 0;
short var_19 = (short)-2588;
unsigned int var_20 = 3098786212U;
signed char var_21 = (signed char)-32;
signed char var_22 = (signed char)-110;
unsigned long long int var_23 = 17672441163357290442ULL;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)62697;
short var_26 = (short)24663;
short var_27 = (short)25426;
unsigned long long int var_28 = 1054573901068530088ULL;
unsigned long long int var_29 = 4169596474598733974ULL;
unsigned long long int var_30 = 8635342553582203682ULL;
signed char var_31 = (signed char)28;
long long int var_32 = -8287917585678834583LL;
long long int var_33 = 7719107113151944171LL;
unsigned long long int var_34 = 6138898511886303148ULL;
unsigned short var_35 = (unsigned short)61819;
unsigned long long int var_36 = 9253180837359582480ULL;
unsigned short var_37 = (unsigned short)23531;
unsigned int var_38 = 202705568U;
_Bool var_39 = (_Bool)0;
long long int var_40 = -1442424822832403551LL;
unsigned int var_41 = 1544549100U;
signed char var_42 = (signed char)-126;
unsigned long long int var_43 = 5286252214568231950ULL;
short var_44 = (short)31360;
unsigned long long int arr_0 [23] ;
unsigned long long int arr_1 [23] ;
long long int arr_4 [23] [23] [23] ;
unsigned char arr_5 [23] [23] [23] ;
_Bool arr_6 [23] [23] [23] ;
unsigned long long int arr_8 [23] [23] [23] [23] ;
unsigned long long int arr_9 [23] [23] ;
unsigned int arr_10 [23] ;
unsigned short arr_11 [23] ;
unsigned int arr_14 [23] ;
unsigned short arr_15 [23] [23] [23] ;
_Bool arr_16 [23] [23] [23] ;
signed char arr_17 [23] [23] ;
short arr_20 [23] ;
unsigned int arr_21 [23] [23] [23] ;
short arr_22 [23] [23] ;
unsigned long long int arr_28 [22] ;
unsigned short arr_30 [22] ;
unsigned short arr_42 [22] ;
unsigned char arr_2 [23] ;
unsigned int arr_3 [23] ;
int arr_7 [23] ;
short arr_13 [23] [23] ;
short arr_19 [23] [23] [23] [23] [23] [23] ;
short arr_24 [23] [23] [23] ;
unsigned char arr_25 [23] [23] [23] ;
unsigned short arr_35 [22] [22] ;
int arr_43 [22] [22] ;
int arr_44 [22] [22] [22] ;
unsigned char arr_47 [22] ;
unsigned long long int arr_48 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2428848226634058746ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 14694352285663558877ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 7137839520675807528LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 8917507365252486580ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 17439641752259844170ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 946342742U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned short)26327;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 3317499690U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)27218;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (short)-6911;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 1159962766U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_22 [i_0] [i_1] = (short)-20843;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = 419287641622460774ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51333 : (unsigned short)43274;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14426 : (unsigned short)12397;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 4091868053U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 1815542952;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (short)10266;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)3158;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (short)-21765;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_35 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)19181 : (unsigned short)45836;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_43 [i_0] [i_1] = (i_0 % 2 == 0) ? -815508153 : 626923996;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1481004056 : -268483725;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_47 [i_0] = (i_0 % 2 == 0) ? (unsigned char)192 : (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4268831117708465307ULL : 12993164052324950797ULL;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_48 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
