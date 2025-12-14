#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)225;
int var_5 = -2037721884;
unsigned short var_6 = (unsigned short)20853;
signed char var_8 = (signed char)-33;
unsigned long long int var_11 = 10094459879030624243ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)239;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
