#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21895;
int var_3 = 1231566591;
unsigned int var_5 = 3326282346U;
short var_7 = (short)24226;
unsigned long long int var_9 = 7055701961601656823ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 13482530828895077880ULL;
void init() {
}

void checksum() {
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
