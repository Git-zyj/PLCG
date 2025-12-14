#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1992867203;
unsigned long long int var_9 = 728202554671645396ULL;
short var_12 = (short)20728;
short var_15 = (short)7412;
int zero = 0;
signed char var_16 = (signed char)75;
int var_17 = -1298794059;
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
