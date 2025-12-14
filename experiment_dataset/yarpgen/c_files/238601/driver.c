#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5676125626431913LL;
unsigned int var_10 = 1980535097U;
unsigned int var_12 = 2131462709U;
int zero = 0;
unsigned short var_16 = (unsigned short)57243;
unsigned int var_17 = 3248181531U;
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
