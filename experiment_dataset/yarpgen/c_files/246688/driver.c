#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)166;
long long int var_8 = -4113456794729708117LL;
long long int var_9 = -8540469701662000405LL;
short var_10 = (short)-1992;
unsigned char var_12 = (unsigned char)103;
unsigned int var_15 = 2268155232U;
int zero = 0;
int var_17 = -1707533543;
unsigned long long int var_18 = 9885071646847453955ULL;
long long int var_19 = 521876746143509300LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
