#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1152161791;
unsigned int var_9 = 2052076883U;
signed char var_10 = (signed char)-113;
unsigned long long int var_13 = 11613031500479919484ULL;
int zero = 0;
unsigned int var_14 = 2755553721U;
unsigned int var_15 = 427083379U;
unsigned long long int var_16 = 13989530712143160840ULL;
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
