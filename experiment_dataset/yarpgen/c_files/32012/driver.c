#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3812;
short var_2 = (short)-8283;
short var_4 = (short)-31014;
short var_7 = (short)-3676;
short var_8 = (short)-22579;
short var_13 = (short)-27380;
short var_17 = (short)30437;
int zero = 0;
short var_18 = (short)-22890;
short var_19 = (short)13984;
short var_20 = (short)22212;
void init() {
}

void checksum() {
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
