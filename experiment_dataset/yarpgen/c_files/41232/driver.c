#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2951659718U;
signed char var_3 = (signed char)-105;
unsigned short var_4 = (unsigned short)7492;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3148456782U;
long long int var_9 = -2165179301454517819LL;
unsigned int var_10 = 3442994158U;
unsigned char var_12 = (unsigned char)87;
unsigned int var_13 = 2353913581U;
int var_14 = -1343830893;
signed char var_15 = (signed char)-93;
short var_16 = (short)31064;
long long int var_17 = -5494406122590489256LL;
unsigned char var_19 = (unsigned char)201;
int zero = 0;
unsigned int var_20 = 966455136U;
long long int var_21 = -6674892580302492164LL;
unsigned short var_22 = (unsigned short)22973;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-43;
int var_25 = -1269968756;
signed char var_26 = (signed char)63;
unsigned long long int var_27 = 10330416264539856482ULL;
unsigned char var_28 = (unsigned char)49;
short var_29 = (short)32328;
unsigned char var_30 = (unsigned char)40;
unsigned long long int var_31 = 295767947109009412ULL;
unsigned int var_32 = 2301747096U;
unsigned char var_33 = (unsigned char)197;
signed char var_34 = (signed char)5;
signed char var_35 = (signed char)-88;
long long int var_36 = 819439700421099434LL;
unsigned short var_37 = (unsigned short)22995;
signed char var_38 = (signed char)-17;
unsigned int var_39 = 1255007844U;
unsigned int var_40 = 230031804U;
signed char arr_2 [14] ;
unsigned int arr_4 [14] [14] ;
long long int arr_5 [14] ;
_Bool arr_10 [14] [14] [14] [14] [14] [14] ;
short arr_12 [14] [14] [14] ;
unsigned char arr_19 [14] [14] [14] ;
short arr_11 [14] [14] [14] [14] ;
unsigned int arr_15 [14] [14] [14] [14] ;
unsigned int arr_33 [24] ;
int arr_36 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 1535490572U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -1166063510585846507LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-22433;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)16825 : (short)17540;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 156211032U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? 1584140133U : 897410036U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_36 [i_0] = -1351160911;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
