#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5478028396103066339LL;
int var_6 = 400915753;
unsigned long long int var_12 = 13201505745685432088ULL;
int zero = 0;
short var_17 = (short)23865;
unsigned long long int var_18 = 14092848729215756280ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
