#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1383869490125901994LL;
unsigned int var_11 = 2045687478U;
unsigned short var_12 = (unsigned short)57265;
int zero = 0;
long long int var_13 = -5991650303358695438LL;
long long int var_14 = -3804336407596748586LL;
unsigned int var_15 = 1802918864U;
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
