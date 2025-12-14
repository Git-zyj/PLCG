#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)11;
long long int var_11 = 2634922416529201168LL;
long long int var_14 = 2185293921698736295LL;
unsigned long long int var_15 = 4767834218924471318ULL;
int var_17 = -1577202822;
int zero = 0;
short var_19 = (short)-4469;
unsigned int var_20 = 3018193143U;
unsigned int var_21 = 2848248621U;
long long int var_22 = -7658709008407393208LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
