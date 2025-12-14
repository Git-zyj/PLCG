#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12796;
signed char var_1 = (signed char)99;
unsigned int var_2 = 1582556895U;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)66;
signed char var_6 = (signed char)-126;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int var_10 = 2135590067;
int var_12 = 1911539961;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-102;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)109;
signed char var_18 = (signed char)69;
signed char arr_3 [10] ;
signed char arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)123 : (signed char)-52;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)59 : (signed char)125;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
