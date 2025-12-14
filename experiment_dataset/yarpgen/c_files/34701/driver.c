#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2279509376U;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-59;
unsigned int var_5 = 4118953613U;
long long int var_6 = -6198091759706163839LL;
int zero = 0;
short var_10 = (short)-18771;
unsigned int var_11 = 2948427197U;
unsigned long long int var_12 = 1200128627214851911ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
