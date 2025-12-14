#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1710551546105348675ULL;
signed char var_8 = (signed char)-97;
unsigned long long int var_15 = 12601730046707800558ULL;
int zero = 0;
unsigned int var_16 = 866995196U;
int var_17 = 410640594;
void init() {
}

void checksum() {
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
