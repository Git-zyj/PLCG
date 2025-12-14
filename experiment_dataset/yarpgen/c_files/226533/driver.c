#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)74;
unsigned char var_2 = (unsigned char)148;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned char var_9 = (unsigned char)26;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)212;
unsigned char var_12 = (unsigned char)3;
unsigned char var_14 = (unsigned char)134;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)9;
int zero = 0;
unsigned char var_18 = (unsigned char)50;
unsigned char var_19 = (unsigned char)34;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)120;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)147;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)1;
unsigned char var_28 = (unsigned char)243;
unsigned char var_29 = (unsigned char)154;
_Bool var_30 = (_Bool)0;
unsigned char var_31 = (unsigned char)77;
unsigned char arr_0 [15] ;
_Bool arr_2 [15] [15] ;
_Bool arr_3 [15] [15] ;
_Bool arr_4 [15] [15] [15] ;
_Bool arr_5 [15] ;
unsigned char arr_7 [13] ;
_Bool arr_9 [13] [13] ;
unsigned char arr_11 [13] ;
_Bool arr_12 [13] ;
_Bool arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)21 : (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
