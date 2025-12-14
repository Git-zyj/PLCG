#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8701148190105293697LL;
short var_5 = (short)-21580;
short var_12 = (short)29518;
unsigned int var_13 = 3288574194U;
int zero = 0;
short var_16 = (short)-18739;
short var_17 = (short)15985;
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
