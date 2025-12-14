#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -239743660;
unsigned int var_2 = 1441544053U;
signed char var_7 = (signed char)45;
unsigned short var_11 = (unsigned short)1272;
signed char var_12 = (signed char)84;
short var_13 = (short)26374;
int zero = 0;
unsigned int var_15 = 3129375766U;
unsigned char var_16 = (unsigned char)189;
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
