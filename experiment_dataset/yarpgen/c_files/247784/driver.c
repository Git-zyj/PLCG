#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1717474344U;
signed char var_4 = (signed char)115;
short var_5 = (short)-11627;
_Bool var_8 = (_Bool)1;
short var_10 = (short)20345;
short var_12 = (short)11299;
int var_14 = 1448042073;
unsigned long long int var_16 = 410463900863616658ULL;
unsigned int var_18 = 2507919902U;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = 5136686336035003747LL;
int var_21 = -390111488;
short var_22 = (short)-2558;
signed char var_23 = (signed char)102;
long long int var_24 = 5538003779156947747LL;
long long int var_25 = 7713524189928854059LL;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 4964434779674741621ULL;
unsigned short var_28 = (unsigned short)60626;
unsigned short var_29 = (unsigned short)56793;
unsigned long long int var_30 = 4715769479158020841ULL;
unsigned char var_31 = (unsigned char)38;
unsigned int var_32 = 4083815949U;
int var_33 = -975691548;
_Bool var_34 = (_Bool)0;
unsigned short var_35 = (unsigned short)60184;
unsigned int var_36 = 22722630U;
_Bool var_37 = (_Bool)0;
short var_38 = (short)-19691;
unsigned short var_39 = (unsigned short)21506;
unsigned long long int arr_0 [21] [21] ;
unsigned long long int arr_3 [21] [21] ;
int arr_4 [21] ;
long long int arr_6 [25] [25] ;
unsigned long long int arr_7 [25] ;
unsigned long long int arr_9 [17] ;
short arr_10 [17] ;
_Bool arr_11 [17] ;
_Bool arr_12 [17] ;
unsigned long long int arr_14 [17] ;
long long int arr_16 [17] ;
unsigned char arr_18 [17] [17] ;
unsigned int arr_2 [21] ;
_Bool arr_5 [21] [21] ;
unsigned long long int arr_15 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 914106094614848485ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 3464852756538834887ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1752000572;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 5976304412648382033LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 12563140838009410963ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 9484760525600300742ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (short)-14246;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 2556282316815882774ULL : 13557923442437664552ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = -660042537907706896LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3557508484U : 40800715U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 4359799764094386296ULL : 9845640987402549646ULL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
