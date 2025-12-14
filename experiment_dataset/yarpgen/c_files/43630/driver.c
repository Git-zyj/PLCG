#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -648011412;
unsigned short var_1 = (unsigned short)38210;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)16794;
unsigned char var_4 = (unsigned char)179;
unsigned short var_5 = (unsigned short)10259;
long long int var_6 = -2198916082831221188LL;
unsigned char var_7 = (unsigned char)231;
long long int var_8 = 8194971642756736449LL;
signed char var_9 = (signed char)125;
short var_10 = (short)23866;
unsigned short var_11 = (unsigned short)36442;
int var_12 = -1778097265;
int zero = 0;
unsigned short var_13 = (unsigned short)27023;
signed char var_14 = (signed char)(-127 - 1);
unsigned short var_15 = (unsigned short)49825;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2672908432U;
int var_18 = -883094317;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 804544131U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)10;
int var_25 = -1695412624;
unsigned int var_26 = 3854762329U;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)1;
unsigned short var_29 = (unsigned short)63564;
int var_30 = 753736923;
unsigned int var_31 = 2241090229U;
unsigned long long int var_32 = 17610468218749056926ULL;
unsigned short var_33 = (unsigned short)14468;
unsigned int var_34 = 2358825717U;
unsigned short var_35 = (unsigned short)3515;
unsigned int var_36 = 1097501395U;
_Bool arr_2 [13] [13] ;
unsigned long long int arr_7 [20] [20] ;
short arr_11 [20] [20] [20] [20] ;
unsigned short arr_13 [20] [20] ;
unsigned char arr_14 [20] [20] [20] ;
unsigned short arr_19 [20] [20] [20] [20] [20] [20] ;
_Bool arr_25 [23] ;
unsigned int arr_26 [23] [23] ;
unsigned short arr_27 [23] ;
unsigned int arr_29 [23] ;
unsigned short arr_30 [23] [23] [23] ;
unsigned int arr_32 [23] ;
int arr_34 [23] ;
int arr_40 [22] [22] ;
unsigned short arr_4 [13] ;
unsigned short arr_5 [13] [13] ;
int arr_17 [20] ;
unsigned short arr_24 [20] ;
unsigned char arr_33 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = 4786056579960121399ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)-11946;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)42977;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)45234;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_26 [i_0] [i_1] = 34941602U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = (unsigned short)45291;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_29 [i_0] = 2776365247U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned short)57510;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_32 [i_0] = 3708755950U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_34 [i_0] = 46363206;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_40 [i_0] [i_1] = -785134895;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)47490;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)1764;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = -113428396;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = (unsigned short)12002;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = (unsigned char)145;
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
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
