#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 724411864U;
long long int var_7 = 1077439504580901952LL;
int zero = 0;
unsigned long long int var_18 = 9631916001449874797ULL;
unsigned long long int var_19 = 7142173309780160820ULL;
long long int var_20 = -3698824432400971692LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
