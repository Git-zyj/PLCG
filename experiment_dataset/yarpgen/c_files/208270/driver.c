#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11255870041087516377ULL;
unsigned char var_2 = (unsigned char)25;
int zero = 0;
unsigned int var_10 = 753422956U;
unsigned long long int var_11 = 15529728788346471602ULL;
unsigned long long int var_12 = 4357763898221081933ULL;
unsigned long long int var_13 = 7101859236269134057ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
