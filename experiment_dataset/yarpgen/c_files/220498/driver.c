#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17134;
signed char var_1 = (signed char)124;
signed char var_3 = (signed char)-96;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 8019126085827479942ULL;
unsigned int var_7 = 2541923763U;
signed char var_8 = (signed char)46;
signed char var_10 = (signed char)-54;
int var_11 = 1044099820;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 735832863U;
unsigned long long int var_15 = 5358785075636803754ULL;
long long int var_16 = -8284104370373030452LL;
unsigned int var_17 = 4277813354U;
short var_19 = (short)-15451;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-54;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)213;
unsigned long long int var_24 = 4239007408011172992ULL;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 13806577730746468762ULL;
short var_27 = (short)1378;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 3056494309864969459ULL;
short arr_1 [20] ;
unsigned char arr_2 [20] ;
unsigned char arr_3 [20] ;
unsigned long long int arr_5 [20] ;
int arr_7 [20] ;
unsigned char arr_9 [12] ;
unsigned char arr_10 [12] ;
_Bool arr_8 [20] [20] ;
unsigned char arr_17 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-1937;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 17251037893637387985ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -467017545 : -747575018;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)229;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
