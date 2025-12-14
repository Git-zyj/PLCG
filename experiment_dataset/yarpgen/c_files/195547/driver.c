#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11243352401618637758ULL;
unsigned long long int var_4 = 6126270114388079705ULL;
int zero = 0;
unsigned int var_12 = 4172975484U;
unsigned long long int var_13 = 3484275537442201778ULL;
unsigned int var_14 = 4142418189U;
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
