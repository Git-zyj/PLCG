#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 495556280593115895LL;
_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)0;
short var_5 = (short)14850;
signed char var_7 = (signed char)95;
unsigned char var_8 = (unsigned char)118;
int var_10 = -1506560179;
int zero = 0;
unsigned char var_11 = (unsigned char)57;
unsigned long long int var_12 = 2457328807185677182ULL;
signed char var_13 = (signed char)-8;
int var_14 = -1704862636;
unsigned int var_15 = 4112380394U;
_Bool var_16 = (_Bool)1;
int arr_0 [14] ;
int arr_2 [14] [14] ;
_Bool arr_5 [14] ;
int arr_7 [14] ;
long long int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 743523088;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 310439878;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -1595125982;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 65225486678054961LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
