#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 212887320;
_Bool var_4 = (_Bool)0;
long long int var_5 = -8820551971453036831LL;
_Bool var_6 = (_Bool)1;
int var_7 = 834487610;
int zero = 0;
signed char var_10 = (signed char)37;
int var_11 = -523210646;
unsigned int var_12 = 1277068916U;
short var_13 = (short)-13817;
short var_14 = (short)21868;
unsigned int arr_0 [16] ;
unsigned int arr_1 [16] ;
unsigned short arr_3 [18] [18] ;
unsigned int arr_4 [18] [18] ;
long long int arr_5 [18] [18] ;
int arr_2 [16] ;
int arr_7 [18] ;
_Bool arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2165030353U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 4245068161U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)44015 : (unsigned short)3555;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 3531613534U : 3263123185U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = -7138994379924570444LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1092518301 : -1887892289;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -1611972822;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
