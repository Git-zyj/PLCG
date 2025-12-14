#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)79;
unsigned short var_12 = (unsigned short)43514;
int zero = 0;
unsigned short var_14 = (unsigned short)45268;
short var_15 = (short)20564;
long long int var_16 = -2272530644329396213LL;
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
