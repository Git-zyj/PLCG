#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2475487097U;
int var_4 = -181282174;
unsigned char var_5 = (unsigned char)85;
unsigned int var_6 = 1848859188U;
signed char var_8 = (signed char)-64;
int zero = 0;
unsigned int var_10 = 1366971111U;
unsigned int var_11 = 2593763931U;
unsigned short var_12 = (unsigned short)20747;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
