#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1486198247;
unsigned int var_14 = 2704062117U;
long long int var_15 = -2775638980765061866LL;
short var_16 = (short)-10806;
int var_17 = 1417473067;
int zero = 0;
unsigned int var_19 = 4005269506U;
unsigned int var_20 = 3789062194U;
unsigned char var_21 = (unsigned char)232;
void init() {
}

void checksum() {
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
