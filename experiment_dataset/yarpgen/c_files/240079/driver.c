#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 312099132U;
unsigned char var_5 = (unsigned char)254;
long long int var_11 = -8921174575675497429LL;
int zero = 0;
long long int var_14 = 6440270676629448317LL;
long long int var_15 = -7893431796234018929LL;
void init() {
}

void checksum() {
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
