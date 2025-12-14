#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17995214701998184585ULL;
signed char var_4 = (signed char)-68;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 808459595U;
signed char var_8 = (signed char)12;
signed char var_9 = (signed char)-115;
short var_10 = (short)-16685;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)31377;
unsigned long long int var_15 = 1485575259912273682ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)40245;
signed char var_19 = (signed char)85;
unsigned short var_20 = (unsigned short)36778;
unsigned char var_21 = (unsigned char)163;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 13088822057305023333ULL;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)115;
unsigned char var_26 = (unsigned char)21;
signed char var_27 = (signed char)94;
unsigned char var_28 = (unsigned char)255;
signed char var_29 = (signed char)-115;
unsigned long long int var_30 = 14581198988396740099ULL;
unsigned long long int var_31 = 1566387044691552691ULL;
unsigned long long int var_32 = 217571373900798348ULL;
signed char var_33 = (signed char)-42;
unsigned char var_34 = (unsigned char)188;
signed char var_35 = (signed char)78;
unsigned int var_36 = 3714829873U;
_Bool var_37 = (_Bool)1;
short var_38 = (short)13795;
signed char arr_0 [21] ;
long long int arr_1 [21] ;
unsigned short arr_2 [19] ;
long long int arr_3 [19] [19] ;
signed char arr_5 [19] [19] [19] ;
signed char arr_6 [19] [19] ;
unsigned char arr_7 [19] ;
_Bool arr_13 [19] [19] ;
unsigned short arr_14 [19] [19] ;
unsigned char arr_16 [19] ;
signed char arr_21 [19] [19] ;
_Bool arr_22 [19] [19] ;
int arr_23 [19] ;
unsigned char arr_27 [19] [19] [19] [19] ;
signed char arr_29 [19] [19] [19] [19] ;
int arr_11 [18] ;
unsigned long long int arr_30 [19] ;
int arr_33 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 6097229297397974946LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)51268;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -3679465359022290736LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)4458;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = 650442135;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = -847356097;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = 12482350990879989930ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_33 [i_0] [i_1] = -1786513286;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
