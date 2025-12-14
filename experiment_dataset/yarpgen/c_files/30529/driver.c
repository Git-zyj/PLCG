#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8693;
signed char var_1 = (signed char)-15;
unsigned short var_2 = (unsigned short)6682;
unsigned char var_4 = (unsigned char)249;
int var_6 = -822632479;
unsigned long long int var_7 = 2893134510479030048ULL;
signed char var_8 = (signed char)-80;
long long int var_9 = 343233354939142912LL;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2429532713U;
int zero = 0;
long long int var_12 = 497922294174586997LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 13846306017652782681ULL;
signed char var_15 = (signed char)107;
unsigned short var_16 = (unsigned short)8976;
unsigned int var_17 = 2484977000U;
short var_18 = (short)-2538;
long long int var_19 = 2683042260230482080LL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)42937;
unsigned long long int var_22 = 5482731921544620132ULL;
short var_23 = (short)-24057;
short var_24 = (short)24977;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)40312;
unsigned long long int var_27 = 16494882670786470849ULL;
long long int arr_3 [14] [14] ;
_Bool arr_4 [14] ;
unsigned int arr_6 [17] ;
_Bool arr_7 [17] ;
int arr_9 [17] ;
unsigned long long int arr_14 [15] ;
short arr_5 [14] ;
unsigned long long int arr_10 [17] [17] ;
short arr_18 [15] ;
_Bool arr_21 [15] [15] [15] ;
long long int arr_22 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = -3230546621900090380LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 2016416154U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 1701892353;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 6839086579657399285ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)-30011;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 10896161154348543982ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (short)22675;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_22 [i_0] [i_1] = -3941479026965398155LL;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
