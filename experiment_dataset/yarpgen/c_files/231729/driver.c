#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)27;
signed char var_6 = (signed char)-78;
unsigned char var_10 = (unsigned char)147;
int var_12 = -1727867524;
signed char var_13 = (signed char)-7;
unsigned char var_14 = (unsigned char)4;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)24766;
unsigned short var_17 = (unsigned short)50606;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)128;
long long int var_20 = -8251073762315136759LL;
unsigned int var_21 = 775772445U;
unsigned long long int var_22 = 11183213840039120657ULL;
int arr_0 [17] ;
int arr_1 [17] ;
long long int arr_2 [18] ;
_Bool arr_3 [18] ;
int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 607407653;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 871594263;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 4768882089111495904LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 123435611;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
