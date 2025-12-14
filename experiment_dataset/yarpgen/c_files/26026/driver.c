#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8303838436480857321LL;
_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)1;
long long int var_8 = 7716033043215661219LL;
long long int var_11 = 8336713894547052900LL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2139669272U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)193;
unsigned int var_20 = 2621239233U;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)32809;
_Bool arr_0 [13] ;
signed char arr_1 [13] [13] ;
signed char arr_4 [23] [23] ;
unsigned short arr_5 [23] ;
unsigned char arr_6 [23] ;
unsigned long long int arr_2 [13] [13] ;
signed char arr_3 [13] ;
int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)57984;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 4505488690474541499ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = -440434094;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
