#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28994;
short var_2 = (short)11895;
short var_5 = (short)5907;
short var_12 = (short)11370;
short var_15 = (short)2471;
short var_16 = (short)-14969;
int zero = 0;
short var_17 = (short)-30939;
short var_18 = (short)16104;
short var_19 = (short)-18566;
short var_20 = (short)31656;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
