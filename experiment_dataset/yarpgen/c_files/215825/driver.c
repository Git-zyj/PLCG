#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1139031763717917939LL;
long long int var_8 = 1992228444932642891LL;
short var_10 = (short)14393;
int zero = 0;
unsigned long long int var_13 = 11536567001322434956ULL;
unsigned short var_14 = (unsigned short)16190;
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
