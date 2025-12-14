#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 343546101;
short var_11 = (short)-867;
unsigned long long int var_12 = 15791055372338208935ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)86;
int var_15 = -886606962;
int var_16 = -906049441;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
