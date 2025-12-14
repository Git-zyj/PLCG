#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3198273749U;
short var_6 = (short)13655;
unsigned int var_10 = 1258448223U;
int zero = 0;
unsigned long long int var_16 = 4841184068608179598ULL;
unsigned long long int var_17 = 1547391211009664253ULL;
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
