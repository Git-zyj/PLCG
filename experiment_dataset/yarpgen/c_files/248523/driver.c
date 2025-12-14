#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12348605623338854090ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_10 = 1643360756231678269ULL;
int var_12 = 741107307;
int zero = 0;
unsigned short var_13 = (unsigned short)33002;
short var_14 = (short)14889;
signed char var_15 = (signed char)-124;
unsigned int var_16 = 1561485141U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
