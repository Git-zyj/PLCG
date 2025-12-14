#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10383991779876095463ULL;
signed char var_2 = (signed char)20;
signed char var_7 = (signed char)125;
signed char var_8 = (signed char)-119;
signed char var_10 = (signed char)83;
unsigned int var_12 = 2960006935U;
signed char var_14 = (signed char)27;
unsigned int var_15 = 1348580314U;
int zero = 0;
signed char var_19 = (signed char)63;
unsigned int var_20 = 2192302255U;
unsigned long long int var_21 = 5667222026090231399ULL;
unsigned int var_22 = 4035599476U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
