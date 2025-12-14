#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)238;
short var_6 = (short)-3243;
short var_9 = (short)23898;
unsigned char var_11 = (unsigned char)79;
long long int var_12 = 7549294048581013782LL;
unsigned char var_13 = (unsigned char)179;
unsigned char var_17 = (unsigned char)84;
int zero = 0;
unsigned char var_20 = (unsigned char)130;
unsigned char var_21 = (unsigned char)253;
unsigned char var_22 = (unsigned char)115;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
