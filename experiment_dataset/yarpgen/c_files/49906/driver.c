#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1859;
unsigned long long int var_4 = 624274791438680750ULL;
unsigned char var_6 = (unsigned char)231;
short var_10 = (short)-13658;
int zero = 0;
unsigned int var_15 = 1937495873U;
int var_16 = 214843989;
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
