#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1330720085U;
short var_1 = (short)-26916;
unsigned int var_2 = 2918876556U;
unsigned long long int var_4 = 15314418496845975461ULL;
unsigned int var_7 = 3009340004U;
int var_9 = 1107686603;
int zero = 0;
unsigned long long int var_11 = 11463732952591045892ULL;
unsigned long long int var_12 = 6520860155842659148ULL;
unsigned char var_13 = (unsigned char)172;
int var_14 = -128739385;
int var_15 = 1205135822;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
