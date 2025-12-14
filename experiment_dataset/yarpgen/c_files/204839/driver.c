#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 666839193585113971ULL;
unsigned short var_4 = (unsigned short)11857;
int var_13 = -1225185756;
int var_14 = 743502012;
int zero = 0;
signed char var_15 = (signed char)-42;
signed char var_16 = (signed char)88;
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
