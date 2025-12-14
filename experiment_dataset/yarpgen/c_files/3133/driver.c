#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -9866485;
unsigned int var_5 = 1807287073U;
unsigned short var_8 = (unsigned short)58448;
int zero = 0;
unsigned int var_13 = 4082901128U;
int var_14 = 1642331026;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
