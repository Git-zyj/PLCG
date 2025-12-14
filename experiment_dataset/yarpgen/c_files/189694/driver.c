#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13864666183990504606ULL;
unsigned long long int var_4 = 10759671003696988907ULL;
signed char var_11 = (signed char)127;
int zero = 0;
short var_15 = (short)23518;
unsigned short var_16 = (unsigned short)40245;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
