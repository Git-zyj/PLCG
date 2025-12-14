#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3228513001U;
unsigned long long int var_3 = 7332803089178332830ULL;
unsigned long long int var_6 = 16320076481934982317ULL;
long long int var_10 = -2781329919225988405LL;
long long int var_12 = -4183302223953479753LL;
int zero = 0;
unsigned int var_16 = 1775647687U;
signed char var_17 = (signed char)3;
void init() {
}

void checksum() {
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
