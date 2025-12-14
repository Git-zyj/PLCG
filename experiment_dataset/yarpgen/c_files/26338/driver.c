#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)125;
signed char var_4 = (signed char)-87;
unsigned int var_7 = 3492476274U;
unsigned int var_8 = 1284051974U;
_Bool var_11 = (_Bool)1;
int var_12 = 2066253083;
signed char var_14 = (signed char)46;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -181587582;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1900861861U;
_Bool var_19 = (_Bool)1;
long long int var_20 = 8145436200720923487LL;
short arr_5 [24] ;
signed char arr_6 [24] [24] [24] [24] ;
signed char arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)-24749;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)42;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
