#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
unsigned int var_1 = 3344281551U;
signed char var_9 = (signed char)48;
long long int var_11 = -8485209692026386538LL;
short var_12 = (short)2956;
int zero = 0;
unsigned int var_13 = 1286562547U;
unsigned long long int var_14 = 12767495557062046016ULL;
long long int var_15 = -7132417182978568989LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
