#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 14532877984990081811ULL;
signed char var_10 = (signed char)-83;
short var_15 = (short)29898;
int zero = 0;
unsigned int var_16 = 1463195913U;
long long int var_17 = -4248978626779633610LL;
short var_18 = (short)-5306;
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
