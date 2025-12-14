#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7339;
long long int var_2 = -1274573163315512689LL;
unsigned int var_11 = 1804298309U;
long long int var_16 = -8284343946594547778LL;
unsigned char var_17 = (unsigned char)119;
int zero = 0;
unsigned char var_18 = (unsigned char)101;
short var_19 = (short)-18384;
unsigned int var_20 = 2909540581U;
unsigned int var_21 = 3736726015U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
