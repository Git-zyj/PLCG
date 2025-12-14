#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 937885828;
int var_12 = -1986406642;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)236;
int zero = 0;
short var_19 = (short)-24018;
int var_20 = 341686067;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
