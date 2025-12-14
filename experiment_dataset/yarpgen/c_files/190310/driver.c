#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-86;
_Bool var_7 = (_Bool)0;
signed char var_11 = (signed char)77;
unsigned long long int var_13 = 7855079287996899297ULL;
int zero = 0;
int var_17 = 2093228536;
unsigned int var_18 = 2223538801U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
