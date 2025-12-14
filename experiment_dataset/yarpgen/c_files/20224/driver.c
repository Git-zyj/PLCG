#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_5 = 3481703283U;
unsigned int var_6 = 3315130245U;
unsigned int var_7 = 322511456U;
unsigned int var_8 = 1377742492U;
signed char var_9 = (signed char)13;
short var_11 = (short)-29129;
unsigned int var_14 = 3810587619U;
signed char var_16 = (signed char)32;
unsigned int var_17 = 4183469098U;
unsigned long long int var_18 = 2774633134581941044ULL;
int zero = 0;
unsigned int var_19 = 2889247003U;
int var_20 = -1143464763;
signed char var_21 = (signed char)-46;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 6485925846178941004ULL;
unsigned int var_24 = 2246988150U;
unsigned long long int var_25 = 3322089753144392070ULL;
short arr_0 [10] ;
unsigned char arr_1 [10] ;
short arr_3 [15] ;
_Bool arr_4 [15] ;
_Bool arr_2 [10] ;
unsigned long long int arr_5 [15] ;
unsigned int arr_6 [15] ;
short arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-1406;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)26298;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 6353773466358439391ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 3314391028U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (short)-6423;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
