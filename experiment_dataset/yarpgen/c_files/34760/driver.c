#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 786796542;
unsigned long long int var_1 = 11502807647897085663ULL;
long long int var_2 = -7918680214618007311LL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)22661;
int var_7 = -1055489598;
unsigned long long int var_8 = 12442677864278986000ULL;
unsigned short var_11 = (unsigned short)52552;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 13519659683602034714ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 5423347110259016495ULL;
int var_21 = 382642400;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-2564;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
_Bool arr_1 [20] ;
unsigned short arr_5 [10] ;
unsigned long long int arr_3 [20] [20] ;
signed char arr_7 [10] ;
int arr_8 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)51334;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 7187535792548817877ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 2085178549;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
