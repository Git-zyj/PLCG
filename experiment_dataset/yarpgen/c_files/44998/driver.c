#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)29128;
int var_6 = -9159057;
int zero = 0;
signed char var_20 = (signed char)118;
long long int var_21 = -65735923499650937LL;
short var_22 = (short)-22029;
unsigned short var_23 = (unsigned short)27964;
unsigned int var_24 = 4028797721U;
unsigned int var_25 = 1072368811U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
