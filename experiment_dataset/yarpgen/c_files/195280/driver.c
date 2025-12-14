#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30275;
unsigned int var_4 = 949768823U;
signed char var_5 = (signed char)-30;
long long int var_6 = -9172668931559909937LL;
short var_7 = (short)-15247;
int zero = 0;
unsigned short var_10 = (unsigned short)22134;
unsigned int var_11 = 635838009U;
unsigned short var_12 = (unsigned short)53172;
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
