#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31153;
short var_3 = (short)-9065;
short var_5 = (short)-12869;
short var_8 = (short)6334;
short var_12 = (short)-5821;
int zero = 0;
short var_17 = (short)-22373;
short var_18 = (short)-8421;
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
