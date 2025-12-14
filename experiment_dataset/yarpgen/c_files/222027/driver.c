#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2833414211U;
unsigned int var_10 = 1722956543U;
unsigned int var_11 = 378542438U;
unsigned int var_14 = 1790061197U;
int zero = 0;
unsigned int var_20 = 1216121137U;
unsigned int var_21 = 3910965174U;
unsigned int var_22 = 1565832784U;
void init() {
}

void checksum() {
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
