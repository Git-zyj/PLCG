#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3199696215392502015LL;
int var_4 = -224669912;
unsigned short var_11 = (unsigned short)4123;
int zero = 0;
long long int var_15 = -7510571537753830204LL;
long long int var_16 = -8642854894389946983LL;
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
