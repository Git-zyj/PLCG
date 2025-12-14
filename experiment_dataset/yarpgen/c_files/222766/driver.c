#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1789030725303994915LL;
short var_2 = (short)7407;
unsigned short var_3 = (unsigned short)31731;
short var_11 = (short)-7419;
short var_13 = (short)-3290;
int zero = 0;
unsigned int var_15 = 950390547U;
unsigned long long int var_16 = 2782316688403816552ULL;
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
