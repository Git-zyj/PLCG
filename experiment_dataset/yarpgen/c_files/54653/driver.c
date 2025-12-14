#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15094;
unsigned int var_3 = 3152380935U;
int var_5 = -904031401;
unsigned short var_12 = (unsigned short)34406;
int zero = 0;
short var_13 = (short)27561;
unsigned int var_14 = 2128165259U;
signed char var_15 = (signed char)51;
unsigned long long int var_16 = 17119262205485636059ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
