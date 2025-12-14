#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1917016017U;
unsigned short var_4 = (unsigned short)61259;
unsigned char var_6 = (unsigned char)248;
long long int var_7 = -6748747597338182008LL;
unsigned char var_8 = (unsigned char)113;
int var_11 = 893906804;
int var_12 = -1005567024;
unsigned long long int var_13 = 7010178915529560485ULL;
unsigned long long int var_14 = 13123877388679506474ULL;
unsigned short var_17 = (unsigned short)48094;
int zero = 0;
unsigned int var_18 = 60644321U;
unsigned char var_19 = (unsigned char)27;
unsigned short var_20 = (unsigned short)30942;
long long int var_21 = -4690516816244599968LL;
unsigned long long int var_22 = 15255050249569805284ULL;
unsigned char var_23 = (unsigned char)6;
unsigned int var_24 = 3174587870U;
signed char var_25 = (signed char)77;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)15;
unsigned int var_28 = 72431134U;
unsigned long long int var_29 = 12119970556399464784ULL;
long long int var_30 = 5084379246689731101LL;
_Bool var_31 = (_Bool)0;
unsigned int var_32 = 2955007505U;
unsigned short var_33 = (unsigned short)43468;
unsigned short var_34 = (unsigned short)46957;
unsigned int var_35 = 1393698989U;
unsigned int var_36 = 1956060797U;
int var_37 = 1114783607;
unsigned char var_38 = (unsigned char)28;
signed char var_39 = (signed char)-59;
int var_40 = 880770294;
unsigned int var_41 = 914792659U;
unsigned int arr_0 [20] [20] ;
long long int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
signed char arr_3 [20] ;
unsigned long long int arr_12 [20] ;
unsigned long long int arr_13 [20] [20] [20] [20] [20] [20] ;
unsigned int arr_14 [20] ;
unsigned short arr_15 [20] [20] [20] [20] ;
unsigned int arr_16 [20] [20] [20] [20] [20] [20] [20] ;
unsigned int arr_17 [20] [20] [20] [20] [20] ;
signed char arr_18 [20] ;
long long int arr_26 [20] [20] [20] ;
int arr_28 [20] [20] [20] [20] [20] ;
long long int arr_30 [23] ;
unsigned long long int arr_32 [23] [23] [23] ;
_Bool arr_33 [23] ;
signed char arr_35 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 1394213755U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -8530396710749447785LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 3797628186333270904ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 17976846135178498359ULL : 7918143200481063628ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 14502266329868616201ULL : 7823601938411819326ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = 3660366812U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)51005 : (unsigned short)30441;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 3303818487U : 540322801U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 1238285384U : 307743062U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 398284994803527101LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = -1172912192;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = 7609749743866711770LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 16504366727888037687ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-67 : (signed char)-111;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
