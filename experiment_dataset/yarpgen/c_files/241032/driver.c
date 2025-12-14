#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1235512887;
int var_8 = -1690345566;
unsigned char var_11 = (unsigned char)168;
int var_12 = -1744032532;
long long int var_13 = 1526498034612538276LL;
unsigned int var_15 = 249472923U;
int zero = 0;
long long int var_19 = -5666904219935042354LL;
unsigned int var_20 = 3740111143U;
void init() {
}

void checksum() {
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
