#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1304805420979886357ULL;
unsigned char var_2 = (unsigned char)24;
int var_6 = 931923544;
long long int var_7 = 6776366754870784625LL;
int zero = 0;
long long int var_11 = -947296523664193089LL;
int var_12 = -40852984;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
