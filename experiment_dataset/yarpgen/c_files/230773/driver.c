#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8584068673200095582LL;
unsigned long long int var_7 = 9524883105185862923ULL;
unsigned int var_8 = 3290513115U;
int zero = 0;
short var_14 = (short)5177;
unsigned int var_15 = 2142848068U;
short var_16 = (short)8154;
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
