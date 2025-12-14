#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2602485591867999274LL;
unsigned long long int var_4 = 14309369937540704207ULL;
long long int var_5 = -7477391668813364135LL;
unsigned long long int var_6 = 14318894198818061457ULL;
unsigned long long int var_8 = 13800368978906569529ULL;
long long int var_12 = -5621829905925959776LL;
long long int var_15 = 1936059629481516507LL;
long long int var_16 = -6824132593578444251LL;
int zero = 0;
unsigned long long int var_18 = 13329327600761695300ULL;
unsigned long long int var_19 = 13380023737697726171ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
