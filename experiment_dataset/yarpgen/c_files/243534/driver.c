#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18377;
signed char var_1 = (signed char)15;
unsigned int var_4 = 295484430U;
unsigned long long int var_9 = 12971714439438237581ULL;
long long int var_15 = 6316267700616416367LL;
int zero = 0;
signed char var_16 = (signed char)62;
short var_17 = (short)-24093;
int var_18 = -1624690552;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
