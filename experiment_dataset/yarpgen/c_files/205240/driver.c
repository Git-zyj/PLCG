#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2361283105U;
unsigned short var_1 = (unsigned short)64507;
short var_2 = (short)-14528;
unsigned short var_3 = (unsigned short)47286;
int var_4 = -1372022358;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)14555;
short var_8 = (short)24684;
long long int var_9 = -8462035127822818816LL;
short var_11 = (short)-11776;
_Bool var_12 = (_Bool)1;
long long int var_13 = -3416759300981918235LL;
long long int var_14 = 7519216726987724318LL;
int var_15 = 2014865267;
_Bool var_16 = (_Bool)1;
unsigned long long int var_18 = 14032605027756042405ULL;
short var_19 = (short)32552;
int zero = 0;
unsigned int var_20 = 948580072U;
short var_21 = (short)14997;
short var_22 = (short)16161;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)42519;
unsigned int var_25 = 418860965U;
short var_26 = (short)10930;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)152;
long long int var_31 = 8946652847824889889LL;
long long int var_32 = -3036770240587628114LL;
unsigned long long int var_33 = 2677273929395583361ULL;
int var_34 = -929484826;
unsigned short var_35 = (unsigned short)47005;
unsigned long long int var_36 = 13298018808755861092ULL;
unsigned int arr_0 [17] ;
long long int arr_1 [17] [17] ;
signed char arr_2 [17] ;
unsigned long long int arr_3 [17] ;
short arr_4 [17] ;
int arr_18 [17] [17] [17] ;
unsigned int arr_28 [24] [24] ;
unsigned int arr_7 [17] [17] ;
unsigned short arr_15 [17] [17] [17] [17] [17] [17] [17] ;
long long int arr_26 [13] [13] ;
short arr_29 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2075367197U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -4284456070243479186LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 12859926736872503537ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-24287;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 2130047650;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_28 [i_0] [i_1] = 1204074458U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 283133430U : 2502873841U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? (unsigned short)29629 : (unsigned short)20368;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_26 [i_0] [i_1] = -3162619698382093296LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_29 [i_0] [i_1] = (short)-708;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
