#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1377721580;
unsigned short var_11 = (unsigned short)2483;
unsigned int var_13 = 1929593890U;
int zero = 0;
int var_20 = -1308543842;
signed char var_21 = (signed char)-94;
unsigned short var_22 = (unsigned short)35690;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
