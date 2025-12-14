#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1087196775U;
long long int var_3 = -801163388784813892LL;
unsigned short var_5 = (unsigned short)37996;
signed char var_12 = (signed char)88;
short var_13 = (short)3840;
int zero = 0;
int var_16 = 1569960745;
unsigned short var_17 = (unsigned short)32681;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
