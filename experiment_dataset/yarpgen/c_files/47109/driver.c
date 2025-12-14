#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4221076186825287326LL;
unsigned long long int var_1 = 16712205832010153449ULL;
short var_7 = (short)18275;
short var_9 = (short)13643;
unsigned short var_12 = (unsigned short)22580;
int zero = 0;
unsigned char var_13 = (unsigned char)7;
unsigned short var_14 = (unsigned short)25463;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
