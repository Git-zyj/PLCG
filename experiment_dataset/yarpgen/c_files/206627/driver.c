#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-13974;
signed char var_7 = (signed char)74;
int zero = 0;
int var_10 = -1989339536;
short var_11 = (short)28017;
int var_12 = 2010599056;
signed char var_13 = (signed char)118;
unsigned int var_14 = 2337823387U;
unsigned int var_15 = 1550919302U;
signed char var_16 = (signed char)54;
signed char arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (signed char)-61;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
