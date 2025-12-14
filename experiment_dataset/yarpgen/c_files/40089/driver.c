#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)13685;
short var_6 = (short)2101;
short var_7 = (short)-20011;
short var_10 = (short)7083;
short var_11 = (short)28554;
short var_15 = (short)16965;
int zero = 0;
short var_20 = (short)26336;
short var_21 = (short)8393;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
