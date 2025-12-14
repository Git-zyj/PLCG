#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1435405170252724152ULL;
unsigned short var_10 = (unsigned short)14667;
int zero = 0;
long long int var_13 = 5303065351822046404LL;
unsigned int var_14 = 3292633581U;
unsigned char var_15 = (unsigned char)241;
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
