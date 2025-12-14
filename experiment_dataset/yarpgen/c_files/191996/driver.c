#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2199336417U;
signed char var_3 = (signed char)77;
unsigned int var_5 = 193019092U;
unsigned int var_8 = 1499159883U;
short var_10 = (short)11206;
signed char var_11 = (signed char)76;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)125;
unsigned int var_14 = 2141050532U;
signed char arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (signed char)60;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
