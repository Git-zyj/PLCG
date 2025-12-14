#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18368;
short var_3 = (short)-3322;
short var_4 = (short)27879;
unsigned short var_8 = (unsigned short)30495;
int zero = 0;
short var_11 = (short)-13250;
unsigned long long int var_12 = 17526918510352462645ULL;
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
