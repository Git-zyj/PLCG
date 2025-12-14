#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = -578659416;
short var_12 = (short)13269;
short var_14 = (short)25044;
signed char var_15 = (signed char)37;
int zero = 0;
unsigned long long int var_16 = 1833125651230918519ULL;
unsigned char var_17 = (unsigned char)42;
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
