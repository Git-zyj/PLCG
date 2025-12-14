#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
unsigned short var_1 = (unsigned short)9808;
long long int var_2 = 1545407070499338301LL;
unsigned short var_8 = (unsigned short)24627;
unsigned int var_9 = 3265647547U;
int zero = 0;
long long int var_10 = -6345278829973376942LL;
unsigned short var_11 = (unsigned short)4086;
unsigned short var_12 = (unsigned short)7365;
unsigned int var_13 = 1814689344U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
