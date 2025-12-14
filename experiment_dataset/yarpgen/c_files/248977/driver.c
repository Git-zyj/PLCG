#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11934886828021721650ULL;
short var_9 = (short)27379;
unsigned int var_10 = 653757405U;
int var_12 = -1818583517;
int zero = 0;
short var_14 = (short)-8721;
unsigned long long int var_15 = 1790168860476590181ULL;
void init() {
}

void checksum() {
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
