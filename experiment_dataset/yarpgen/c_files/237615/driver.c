#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
short var_1 = (short)-12349;
_Bool var_2 = (_Bool)1;
short var_3 = (short)23243;
signed char var_4 = (signed char)23;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 15542386749639248932ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3328265231U;
signed char var_12 = (signed char)127;
unsigned int var_13 = 2766890360U;
unsigned int var_15 = 1892428123U;
short var_16 = (short)30451;
int zero = 0;
long long int var_17 = -7827813532962515620LL;
unsigned long long int var_18 = 15792056027581135662ULL;
signed char var_19 = (signed char)53;
long long int var_20 = -2602132767656440685LL;
unsigned long long int var_21 = 7716704248971868295ULL;
_Bool var_22 = (_Bool)0;
long long int var_23 = -3193379407450611311LL;
unsigned int var_24 = 1157117874U;
_Bool var_25 = (_Bool)0;
int var_26 = 1395294573;
short var_27 = (short)-23099;
_Bool var_28 = (_Bool)0;
unsigned char var_29 = (unsigned char)92;
signed char var_30 = (signed char)-39;
signed char var_31 = (signed char)123;
long long int var_32 = -2330035877401789845LL;
unsigned char var_33 = (unsigned char)23;
_Bool var_34 = (_Bool)1;
unsigned long long int var_35 = 3461102485051875058ULL;
short arr_0 [24] ;
short arr_1 [24] ;
signed char arr_2 [20] ;
short arr_3 [20] ;
signed char arr_4 [20] ;
short arr_6 [20] ;
_Bool arr_9 [20] [20] [20] ;
unsigned char arr_10 [20] ;
int arr_11 [20] [20] ;
long long int arr_12 [20] [20] [20] ;
long long int arr_13 [20] [20] [20] ;
unsigned long long int arr_14 [20] ;
signed char arr_17 [20] [20] [20] ;
signed char arr_18 [20] ;
unsigned short arr_19 [20] [20] [20] [20] ;
unsigned int arr_20 [20] [20] [20] ;
unsigned char arr_31 [16] ;
int arr_7 [20] ;
short arr_8 [20] ;
short arr_15 [20] [20] ;
unsigned char arr_22 [20] ;
_Bool arr_23 [20] [20] [20] [20] [20] ;
short arr_29 [12] [12] ;
unsigned char arr_30 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)17288;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-11275;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)-1695;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)-30924;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? -1002491654 : -1837527066;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2519966389878140611LL : 7186148880122706906LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -6661083722361149456LL : 5282144861195148807LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = 13108577052020547909ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)-95 : (signed char)88;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned short)6067;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 1414702885U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_31 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 708598458;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (short)31243;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-5566 : (short)14065;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned char)224 : (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_29 [i_0] [i_1] = (short)6572;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_30 [i_0] = (unsigned char)66;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
