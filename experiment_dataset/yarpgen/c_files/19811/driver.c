#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3159375773U;
unsigned int var_2 = 2281827473U;
unsigned int var_5 = 3531625170U;
unsigned int var_6 = 3549118317U;
unsigned int var_9 = 50043966U;
int var_12 = -1046359885;
int var_16 = 2039419895;
int zero = 0;
unsigned int var_17 = 1690152853U;
int var_18 = 1429642723;
unsigned int var_19 = 1972484245U;
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
