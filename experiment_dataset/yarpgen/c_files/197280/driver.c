#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)15;
unsigned int var_7 = 2402236861U;
int var_8 = -2078417870;
unsigned short var_12 = (unsigned short)37839;
int zero = 0;
int var_13 = 728605352;
unsigned int var_14 = 1312528515U;
unsigned char var_15 = (unsigned char)14;
int var_16 = -1926321565;
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
