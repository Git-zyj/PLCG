#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10470989734585933818ULL;
unsigned char var_3 = (unsigned char)49;
unsigned char var_5 = (unsigned char)123;
short var_7 = (short)5983;
unsigned char var_11 = (unsigned char)199;
int zero = 0;
int var_12 = -51296704;
unsigned long long int var_13 = 7257195702200243029ULL;
short var_14 = (short)29333;
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
