#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1501133556;
long long int var_15 = -5098244619972650677LL;
unsigned char var_17 = (unsigned char)172;
long long int var_19 = 7597239399939549410LL;
int zero = 0;
short var_20 = (short)16053;
unsigned long long int var_21 = 935326134504412194ULL;
short var_22 = (short)29563;
int var_23 = -185662744;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
