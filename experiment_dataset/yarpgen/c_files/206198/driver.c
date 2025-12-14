#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)120;
unsigned long long int var_7 = 10740918556269525675ULL;
unsigned int var_8 = 76539190U;
int zero = 0;
unsigned int var_14 = 1199954898U;
int var_15 = 2040373293;
unsigned int var_16 = 881255776U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
