#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)63;
short var_5 = (short)-2978;
int var_7 = 2021916946;
int var_16 = -627896633;
int zero = 0;
int var_20 = 2147060455;
unsigned long long int var_21 = 11171935118312364408ULL;
unsigned long long int var_22 = 10871919712952192911ULL;
int var_23 = 397471276;
unsigned short arr_3 [23] ;
_Bool arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)65177 : (unsigned short)4313;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
