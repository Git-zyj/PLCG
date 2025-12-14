#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_12 = 3850566254U;
unsigned int var_13 = 1844082882U;
int var_14 = -709323378;
unsigned int var_15 = 1525353048U;
int zero = 0;
unsigned int var_16 = 895123831U;
long long int var_17 = -3252551201130918174LL;
signed char var_18 = (signed char)66;
unsigned int var_19 = 3895223744U;
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
