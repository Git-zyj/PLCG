#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16412;
unsigned long long int var_4 = 13785646773297755873ULL;
long long int var_12 = -4049574539854330120LL;
int zero = 0;
signed char var_17 = (signed char)-122;
int var_18 = -869255695;
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
