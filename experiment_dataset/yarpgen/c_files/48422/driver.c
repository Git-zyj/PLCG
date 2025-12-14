#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9807191571517027133ULL;
unsigned long long int var_3 = 8229472039794584053ULL;
long long int var_5 = -1395302827037140379LL;
unsigned short var_13 = (unsigned short)22033;
unsigned long long int var_15 = 3305597567896118922ULL;
short var_16 = (short)24065;
int zero = 0;
short var_19 = (short)-26991;
long long int var_20 = -664139247314830488LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
