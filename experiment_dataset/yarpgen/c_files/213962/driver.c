#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1347650676587313025LL;
short var_1 = (short)-4334;
long long int var_15 = -2781651678504890936LL;
int zero = 0;
signed char var_19 = (signed char)-116;
unsigned long long int var_20 = 6675612021737342167ULL;
unsigned char var_21 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
