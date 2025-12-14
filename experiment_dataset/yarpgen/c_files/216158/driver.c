#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1172712215;
long long int var_1 = -9107315981581415509LL;
int var_2 = 1329461678;
unsigned short var_4 = (unsigned short)25616;
short var_5 = (short)-28739;
int var_6 = -1035945876;
unsigned long long int var_7 = 15283689307420676477ULL;
unsigned short var_8 = (unsigned short)45286;
unsigned char var_10 = (unsigned char)236;
long long int var_11 = -3643837609184446278LL;
long long int var_12 = -3220972579537889434LL;
int zero = 0;
unsigned short var_13 = (unsigned short)56210;
unsigned int var_14 = 3625597917U;
unsigned int var_15 = 1671779445U;
signed char var_16 = (signed char)-100;
unsigned int var_17 = 3396780955U;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)35850;
unsigned short var_20 = (unsigned short)33807;
unsigned long long int var_21 = 7025037321890940109ULL;
unsigned int var_22 = 1817868029U;
unsigned short arr_0 [11] ;
_Bool arr_1 [11] [11] ;
_Bool arr_3 [11] [11] [11] ;
long long int arr_4 [21] ;
unsigned int arr_6 [21] ;
_Bool arr_11 [17] ;
long long int arr_15 [18] [18] ;
unsigned short arr_16 [18] ;
signed char arr_19 [10] [10] ;
_Bool arr_20 [10] ;
int arr_26 [21] ;
unsigned short arr_27 [21] ;
unsigned long long int arr_28 [21] ;
short arr_31 [11] ;
unsigned long long int arr_34 [11] [11] [11] ;
unsigned short arr_37 [11] [11] [11] [11] ;
unsigned long long int arr_42 [11] [11] ;
short arr_8 [21] [21] ;
unsigned long long int arr_9 [21] [21] ;
unsigned long long int arr_12 [17] ;
unsigned short arr_13 [17] ;
unsigned long long int arr_14 [17] [17] ;
_Bool arr_17 [18] [18] ;
unsigned short arr_18 [18] ;
_Bool arr_23 [10] ;
_Bool arr_24 [10] ;
unsigned long long int arr_25 [10] ;
unsigned short arr_29 [21] ;
int arr_30 [21] ;
unsigned short arr_38 [11] ;
int arr_39 [11] ;
unsigned int arr_45 [11] [11] [11] [11] ;
_Bool arr_48 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)46247;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -765990510443091946LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 2370422649U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = -7155791752265774016LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (unsigned short)7072;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = -1289691196;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (unsigned short)31754;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = 16285837507823128933ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_31 [i_0] = (short)22757;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 17343104798891095150ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (unsigned short)21035;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_42 [i_0] [i_1] = 16517322749093605858ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)21265 : (short)-3318;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 15715505109342657438ULL : 11713744147652320108ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 5971240155863354584ULL : 14516893443984657583ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)28755 : (unsigned short)8892;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 5323267027685804200ULL : 13941576073981784813ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (unsigned short)21056;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = 17380895252437985948ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = (unsigned short)16084;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_30 [i_0] = 791048608;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_38 [i_0] = (unsigned short)11264;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_39 [i_0] = -971859152;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 729452173U : 432269752U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_48 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_48 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
