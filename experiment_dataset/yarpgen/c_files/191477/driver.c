#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21728;
short var_5 = (short)-30337;
int zero = 0;
unsigned long long int var_15 = 1557029826857502327ULL;
unsigned char var_16 = (unsigned char)118;
signed char var_17 = (signed char)58;
signed char var_18 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
