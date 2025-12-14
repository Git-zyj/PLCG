#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3089778750U;
long long int var_3 = 6824816868083004294LL;
signed char var_15 = (signed char)-58;
int zero = 0;
unsigned long long int var_17 = 12419091999279736026ULL;
int var_18 = -1323336606;
signed char var_19 = (signed char)-52;
void init() {
}

void checksum() {
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
