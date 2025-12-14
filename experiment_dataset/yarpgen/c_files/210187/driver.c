#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1572355061;
unsigned int var_11 = 2550514823U;
long long int var_14 = -6929799789924264512LL;
int var_15 = -1770572404;
int zero = 0;
unsigned int var_16 = 2704509796U;
long long int var_17 = -6565305827940288428LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
