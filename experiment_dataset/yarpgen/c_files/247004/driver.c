#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2173359109U;
unsigned int var_10 = 1176499281U;
unsigned int var_14 = 2639261679U;
int var_15 = -1550414397;
int zero = 0;
int var_16 = 2064885906;
long long int var_17 = 6837512401570806317LL;
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
