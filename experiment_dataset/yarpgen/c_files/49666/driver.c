#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3176631520U;
unsigned long long int var_4 = 8394778381667497009ULL;
long long int var_7 = -8213698806753959956LL;
long long int var_11 = 1938242362148292523LL;
int zero = 0;
unsigned long long int var_12 = 14274949706710883459ULL;
signed char var_13 = (signed char)82;
signed char var_14 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
