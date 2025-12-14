#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 686041642;
long long int var_2 = 2689628334172683776LL;
short var_5 = (short)23900;
unsigned short var_9 = (unsigned short)30253;
signed char var_11 = (signed char)-84;
int zero = 0;
signed char var_14 = (signed char)-8;
unsigned int var_15 = 82182308U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
