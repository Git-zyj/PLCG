#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
unsigned int var_2 = 69854862U;
short var_3 = (short)24410;
int var_4 = -105172869;
short var_11 = (short)-31269;
int zero = 0;
short var_15 = (short)30127;
unsigned int var_16 = 1888801952U;
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
