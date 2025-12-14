#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2654908003U;
long long int var_3 = 4257770831431790075LL;
unsigned int var_12 = 3686865070U;
long long int var_14 = 4348096961130638003LL;
int zero = 0;
short var_19 = (short)-32690;
short var_20 = (short)-17721;
unsigned int var_21 = 2747095562U;
unsigned short var_22 = (unsigned short)35473;
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
