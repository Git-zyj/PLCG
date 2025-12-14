#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 2489396073989753465LL;
int var_12 = -2044384250;
unsigned char var_13 = (unsigned char)104;
int zero = 0;
long long int var_16 = -5066537144130669819LL;
unsigned int var_17 = 3327073510U;
unsigned long long int var_18 = 15623922683674229624ULL;
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
