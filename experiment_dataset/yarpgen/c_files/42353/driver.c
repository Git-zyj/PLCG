#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 719065553U;
unsigned int var_3 = 2932889889U;
unsigned int var_11 = 761307373U;
unsigned int var_13 = 3323663398U;
unsigned int var_14 = 3974161580U;
int zero = 0;
unsigned int var_18 = 3419045927U;
unsigned int var_19 = 1035486866U;
unsigned int var_20 = 1252815292U;
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
