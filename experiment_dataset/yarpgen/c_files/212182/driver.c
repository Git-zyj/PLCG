#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-896;
long long int var_5 = 4093540922913906835LL;
unsigned long long int var_9 = 9366406258059428835ULL;
unsigned long long int var_10 = 18304208180726016ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)83;
int var_13 = -1844718734;
int var_14 = -710435792;
unsigned long long int var_15 = 16927692521434609716ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
