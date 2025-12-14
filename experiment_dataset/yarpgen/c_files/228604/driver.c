#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -222384562;
long long int var_4 = -9182808381289582502LL;
unsigned int var_10 = 851627472U;
int zero = 0;
unsigned long long int var_15 = 17587971951306589918ULL;
long long int var_16 = -7844537642720721592LL;
void init() {
}

void checksum() {
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
