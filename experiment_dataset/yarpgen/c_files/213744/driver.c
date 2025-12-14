#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 2386718905360603959ULL;
int var_7 = -1997681216;
int var_8 = -2032044325;
short var_10 = (short)-9423;
long long int var_13 = 8576250821265824105LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = -4002865160161368079LL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-11632;
unsigned short var_19 = (unsigned short)21254;
signed char var_20 = (signed char)42;
short var_21 = (short)8;
signed char arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned short arr_2 [11] [11] ;
unsigned char arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)3244;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)130;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
