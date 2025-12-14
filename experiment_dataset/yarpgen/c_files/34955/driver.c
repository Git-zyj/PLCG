#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3068252056U;
short var_7 = (short)-6479;
signed char var_8 = (signed char)37;
short var_12 = (short)23739;
signed char var_13 = (signed char)73;
int zero = 0;
short var_15 = (short)27516;
unsigned long long int var_16 = 11003249075844790859ULL;
unsigned long long int var_17 = 12966844967732825594ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
