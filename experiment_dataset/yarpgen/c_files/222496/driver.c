#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -559835099;
long long int var_1 = 2502152645057676345LL;
signed char var_4 = (signed char)-10;
unsigned char var_6 = (unsigned char)116;
unsigned short var_7 = (unsigned short)3786;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1286309755U;
int var_13 = 1773245133;
long long int var_14 = 880405154090022944LL;
unsigned int var_15 = 2656758570U;
unsigned int var_16 = 3714756876U;
int zero = 0;
unsigned char var_17 = (unsigned char)2;
long long int var_18 = -2418056416817286183LL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)109;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)60265;
unsigned int var_23 = 3893057690U;
long long int var_24 = 2916919540773225961LL;
signed char var_25 = (signed char)-17;
unsigned short var_26 = (unsigned short)664;
unsigned char var_27 = (unsigned char)61;
unsigned char var_28 = (unsigned char)134;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)75;
unsigned char var_31 = (unsigned char)243;
signed char var_32 = (signed char)-27;
_Bool var_33 = (_Bool)0;
unsigned int var_34 = 3147335259U;
unsigned char var_35 = (unsigned char)238;
unsigned long long int var_36 = 12213025827603377387ULL;
int var_37 = -526020723;
unsigned long long int var_38 = 17668364448657889148ULL;
int arr_0 [19] [19] ;
long long int arr_1 [19] ;
unsigned short arr_2 [19] ;
unsigned long long int arr_3 [19] [19] ;
long long int arr_4 [19] [19] [19] ;
unsigned int arr_5 [19] [19] [19] ;
short arr_6 [19] [19] [19] ;
unsigned char arr_8 [16] ;
unsigned char arr_10 [16] ;
unsigned long long int arr_12 [16] [16] ;
long long int arr_13 [16] [16] ;
unsigned int arr_15 [16] [16] ;
unsigned short arr_16 [16] [16] [16] ;
unsigned short arr_17 [16] [16] [16] [16] ;
int arr_18 [16] [16] ;
unsigned short arr_20 [16] [16] [16] [16] [16] ;
_Bool arr_21 [16] [16] [16] [16] [16] ;
unsigned int arr_25 [16] [16] [16] ;
short arr_26 [16] [16] [16] ;
short arr_7 [19] [19] ;
_Bool arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -1597834601;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 5673371479369602776LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)52566;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 9734507768788951697ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -5830841988304428704LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3275566006U : 1038422261U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)19083;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = 17116957411593557001ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = -2455474137025098439LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 2996586720U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)5340;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)39078;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = 1013811778;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)30074;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 2064884728U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (short)-32339;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-16334 : (short)7736;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
