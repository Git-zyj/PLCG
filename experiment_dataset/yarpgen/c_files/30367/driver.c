#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1772539801;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1733831552U;
signed char var_4 = (signed char)-116;
short var_5 = (short)16415;
int var_9 = -2000399961;
short var_10 = (short)15150;
unsigned char var_11 = (unsigned char)246;
int var_12 = -1057857337;
unsigned char var_14 = (unsigned char)33;
unsigned int var_15 = 3134536699U;
int var_16 = 1252228499;
int var_17 = 1640737824;
int var_18 = -1744799876;
int zero = 0;
int var_19 = -854142798;
int var_20 = -352761226;
int var_21 = -387560762;
int var_22 = -2100112081;
unsigned int var_23 = 3365028651U;
int var_24 = -1588490452;
unsigned char var_25 = (unsigned char)134;
int var_26 = 1557254951;
short var_27 = (short)11853;
signed char var_28 = (signed char)-62;
int arr_0 [23] ;
short arr_1 [23] ;
unsigned char arr_3 [18] ;
int arr_4 [18] ;
int arr_7 [18] ;
unsigned char arr_10 [18] ;
signed char arr_12 [18] [18] ;
signed char arr_2 [23] ;
_Bool arr_5 [18] ;
unsigned int arr_8 [18] ;
signed char arr_9 [18] [18] ;
unsigned char arr_14 [18] ;
long long int arr_15 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1013072662;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-18912;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -1099378032;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -139476334;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-1 : (signed char)8;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 376679674U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)73 : (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 5133544176164233711LL : -1789667473160056270LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
