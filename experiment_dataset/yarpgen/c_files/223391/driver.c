#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3188570623U;
unsigned long long int var_11 = 4981221609423375979ULL;
int var_13 = 24836258;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3692229518U;
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
