#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3286;
unsigned int var_2 = 1886179054U;
unsigned char var_10 = (unsigned char)24;
unsigned char var_12 = (unsigned char)190;
long long int var_13 = 2084313656998992105LL;
unsigned char var_14 = (unsigned char)242;
int zero = 0;
signed char var_16 = (signed char)57;
short var_17 = (short)-13425;
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
