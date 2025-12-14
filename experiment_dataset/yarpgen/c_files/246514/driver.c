#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
short var_10 = (short)-9226;
short var_12 = (short)24700;
int zero = 0;
long long int var_19 = -2212585451477553153LL;
int var_20 = -1884617915;
unsigned char var_21 = (unsigned char)3;
long long int var_22 = 6832503289539839208LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
