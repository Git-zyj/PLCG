#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1197451497U;
unsigned long long int var_9 = 9109102592627996875ULL;
int zero = 0;
unsigned int var_19 = 1428550470U;
unsigned int var_20 = 3013524604U;
unsigned long long int var_21 = 15678957992145038420ULL;
unsigned int var_22 = 3264606051U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
