#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6694639712751382554LL;
unsigned short var_8 = (unsigned short)37255;
int zero = 0;
unsigned short var_14 = (unsigned short)56211;
long long int var_15 = 3829336934436900246LL;
unsigned long long int var_16 = 10961037689960234313ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
