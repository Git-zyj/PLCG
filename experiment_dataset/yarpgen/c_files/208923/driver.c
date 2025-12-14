#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)43;
short var_6 = (short)24997;
unsigned int var_7 = 1313268708U;
unsigned int var_15 = 4140288873U;
unsigned int var_17 = 2985098247U;
int zero = 0;
unsigned long long int var_20 = 3329789098142878276ULL;
unsigned long long int var_21 = 6017222499209517037ULL;
int var_22 = 1138961171;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
