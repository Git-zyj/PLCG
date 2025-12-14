#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-99;
int var_9 = 1758771888;
int zero = 0;
unsigned short var_14 = (unsigned short)64461;
unsigned long long int var_15 = 10170180001079449722ULL;
unsigned int var_16 = 1350580666U;
short var_17 = (short)31006;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
