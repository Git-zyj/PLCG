#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 288704231U;
unsigned int var_7 = 3787398255U;
int zero = 0;
signed char var_15 = (signed char)1;
unsigned long long int var_16 = 9525840937911443789ULL;
long long int var_17 = -3127118593048391059LL;
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
