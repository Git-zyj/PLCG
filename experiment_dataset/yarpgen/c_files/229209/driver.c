#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -785164077;
signed char var_1 = (signed char)-36;
unsigned long long int var_4 = 14911432974286433924ULL;
int var_5 = 1899126482;
long long int var_9 = 4649738855649830905LL;
unsigned long long int var_11 = 5858227619938561205ULL;
int var_12 = -89796319;
int zero = 0;
long long int var_16 = 6247061289940164541LL;
signed char var_17 = (signed char)116;
signed char var_18 = (signed char)-99;
long long int var_19 = 4039594125721855991LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
