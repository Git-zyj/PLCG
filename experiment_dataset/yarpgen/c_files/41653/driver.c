#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6707717633189329433ULL;
int var_11 = -304412362;
unsigned int var_12 = 676780239U;
int zero = 0;
signed char var_18 = (signed char)-92;
short var_19 = (short)-19591;
int var_20 = 653302768;
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
