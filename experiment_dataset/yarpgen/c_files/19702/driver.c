#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)35;
unsigned long long int var_7 = 2624779451716651898ULL;
unsigned long long int var_13 = 15672192664476723542ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)44687;
int var_17 = -1570793551;
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
