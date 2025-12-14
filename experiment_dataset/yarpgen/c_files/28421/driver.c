#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4253098902U;
long long int var_9 = -1332922896504510588LL;
int var_10 = -112071042;
unsigned long long int var_11 = 8442761670376118513ULL;
long long int var_12 = -4165423464924355702LL;
int zero = 0;
unsigned short var_15 = (unsigned short)15306;
short var_16 = (short)18982;
void init() {
}

void checksum() {
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
