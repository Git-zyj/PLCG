#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9682642689991452417ULL;
long long int var_4 = -5434208374234279129LL;
unsigned int var_10 = 2860152329U;
int zero = 0;
unsigned long long int var_13 = 5695724460165157635ULL;
signed char var_14 = (signed char)-68;
long long int var_15 = -7023739129731173064LL;
long long int var_16 = 4463308869941208468LL;
unsigned long long int var_17 = 15524864094060580981ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
