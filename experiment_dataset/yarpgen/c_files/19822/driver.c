#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 583831241;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 9634304360984714210ULL;
unsigned char var_4 = (unsigned char)10;
unsigned char var_5 = (unsigned char)158;
unsigned char var_7 = (unsigned char)173;
int zero = 0;
int var_11 = -2030561869;
int var_12 = 1749766062;
unsigned long long int var_13 = 2649018873749611530ULL;
unsigned char var_14 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
