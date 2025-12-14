#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13727040532648739702ULL;
signed char var_12 = (signed char)106;
int var_17 = 633143247;
int zero = 0;
long long int var_20 = 8436240639816956115LL;
int var_21 = -1769592687;
unsigned int var_22 = 32972009U;
short var_23 = (short)-15000;
signed char var_24 = (signed char)-18;
short arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)2979;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
