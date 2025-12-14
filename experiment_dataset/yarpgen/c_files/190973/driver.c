#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1660384690U;
unsigned long long int var_8 = 16628291289345685210ULL;
int var_10 = -197538890;
int zero = 0;
unsigned long long int var_13 = 6363570017436081743ULL;
unsigned long long int var_14 = 14931497330896929996ULL;
signed char var_15 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
