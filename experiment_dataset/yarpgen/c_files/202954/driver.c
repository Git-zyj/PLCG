#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)33886;
unsigned long long int var_14 = 5174986887814919034ULL;
long long int var_16 = -2868337816426453944LL;
int zero = 0;
int var_17 = -1795185321;
unsigned short var_18 = (unsigned short)54846;
void init() {
}

void checksum() {
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
