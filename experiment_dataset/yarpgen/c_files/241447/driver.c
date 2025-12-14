#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
unsigned int var_14 = 4227779030U;
int zero = 0;
long long int var_15 = -5632327278136163381LL;
unsigned int var_16 = 3685946939U;
long long int var_17 = 6395876262296174463LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
