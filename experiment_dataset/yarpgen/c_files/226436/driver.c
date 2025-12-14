#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12761811673812772990ULL;
long long int var_1 = 6607390762169805635LL;
long long int var_9 = 999531999343137862LL;
unsigned long long int var_13 = 12330534167856448993ULL;
long long int var_14 = -5633604183758455747LL;
int zero = 0;
short var_18 = (short)-3793;
short var_19 = (short)-32405;
unsigned long long int var_20 = 16060873372493124835ULL;
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
