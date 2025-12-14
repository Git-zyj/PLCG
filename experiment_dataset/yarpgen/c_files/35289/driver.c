#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23962;
long long int var_2 = -4641025964001181931LL;
unsigned int var_6 = 245317843U;
short var_10 = (short)-22234;
int zero = 0;
int var_15 = 299526544;
int var_16 = 67477898;
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
