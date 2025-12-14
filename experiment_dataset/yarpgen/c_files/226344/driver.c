#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2486240953U;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-15;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_13 = -1475834475;
int zero = 0;
unsigned long long int var_14 = 17423987993217178367ULL;
unsigned long long int var_15 = 573160416137313516ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
