#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1292844928;
int var_6 = -139168061;
long long int var_10 = 1808533123437304264LL;
int zero = 0;
int var_13 = -126044571;
unsigned int var_14 = 4203718194U;
unsigned int var_15 = 599859820U;
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
