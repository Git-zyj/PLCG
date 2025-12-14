#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)4;
unsigned short var_5 = (unsigned short)39304;
short var_8 = (short)-27813;
int var_9 = -549755976;
unsigned char var_12 = (unsigned char)107;
unsigned short var_13 = (unsigned short)24910;
int zero = 0;
short var_16 = (short)572;
unsigned short var_17 = (unsigned short)42517;
short var_18 = (short)-17951;
signed char var_19 = (signed char)-72;
int var_20 = 619334817;
_Bool var_21 = (_Bool)1;
long long int var_22 = 601488611448149834LL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 7552996128993693721ULL;
unsigned char var_25 = (unsigned char)53;
short var_26 = (short)-32433;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)-51;
long long int arr_0 [23] [23] ;
unsigned char arr_1 [23] ;
short arr_4 [23] ;
unsigned short arr_5 [23] [23] ;
int arr_6 [23] [23] ;
unsigned int arr_10 [23] ;
unsigned int arr_11 [23] [23] [23] ;
unsigned int arr_12 [23] [23] [23] ;
unsigned short arr_19 [23] [23] ;
_Bool arr_23 [23] [23] ;
int arr_2 [23] ;
unsigned int arr_3 [23] ;
unsigned int arr_8 [23] [23] ;
int arr_9 [23] [23] ;
short arr_14 [23] ;
int arr_15 [23] ;
unsigned short arr_25 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 3888317361863819401LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)-32120;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)25456 : (unsigned short)14372;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 87722245;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 2464442798U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2138200390U : 3850420347U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 3400210895U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)48517;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -861154287 : 1435745506;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4227123267U : 2001135753U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 953855547U : 1432462104U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 686663345 : 1341192814;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)27986 : (short)19521;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -1251255758 : -2100008961;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (unsigned short)13375;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
