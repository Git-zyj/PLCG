#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 102381274U;
unsigned int var_2 = 2997481032U;
unsigned long long int var_3 = 16764449003828739664ULL;
long long int var_4 = -4798628412991759290LL;
signed char var_5 = (signed char)-40;
long long int var_6 = -7816976776790823562LL;
_Bool var_7 = (_Bool)0;
long long int var_9 = 3256259889351995887LL;
_Bool var_10 = (_Bool)0;
long long int var_11 = 6368516709112424030LL;
unsigned long long int var_13 = 17922230246693166234ULL;
long long int var_14 = 7272828647007254318LL;
int zero = 0;
unsigned char var_15 = (unsigned char)249;
unsigned int var_16 = 1963440567U;
long long int var_17 = -1289624961607059802LL;
signed char var_18 = (signed char)-46;
signed char var_19 = (signed char)-42;
long long int var_20 = 4822249914652444073LL;
long long int var_21 = 1619758035989951836LL;
unsigned int var_22 = 3541964192U;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 12376727025330436970ULL;
unsigned char var_25 = (unsigned char)77;
long long int var_26 = 1422204595683923481LL;
unsigned long long int var_27 = 11047101497135663297ULL;
long long int var_28 = 2485134184294734LL;
unsigned long long int var_29 = 9179058305925716862ULL;
unsigned int var_30 = 1430755723U;
long long int var_31 = 3919586821325703145LL;
unsigned int var_32 = 2892576634U;
_Bool var_33 = (_Bool)0;
unsigned long long int arr_0 [20] ;
unsigned int arr_1 [20] [20] ;
long long int arr_2 [20] ;
unsigned long long int arr_4 [12] ;
signed char arr_5 [12] [12] ;
unsigned int arr_6 [12] [12] ;
unsigned long long int arr_7 [12] [12] [12] ;
long long int arr_11 [12] ;
signed char arr_12 [12] [12] ;
_Bool arr_14 [12] ;
signed char arr_24 [12] [12] [12] [12] ;
_Bool arr_29 [25] [25] ;
_Bool arr_30 [25] [25] ;
long long int arr_31 [25] ;
_Bool arr_8 [12] [12] ;
unsigned long long int arr_9 [12] [12] [12] ;
unsigned long long int arr_16 [12] [12] [12] ;
unsigned long long int arr_23 [12] [12] [12] [12] [12] ;
unsigned int arr_32 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 10336837318087241087ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 589155449U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -3919152963353220097LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 11601179703001208959ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 152409508U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2822462854482907487ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = -6034139122963298680LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-103 : (signed char)63;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_29 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_30 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? -4041242392424521455LL : -8170802144573227514LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 14457290628936318800ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 16689334034943618848ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = 15528885585708404213ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 2268994259U : 443351161U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
