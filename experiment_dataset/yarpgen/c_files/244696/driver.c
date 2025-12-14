#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1905363546U;
short var_2 = (short)-22008;
int var_3 = -626831859;
unsigned int var_6 = 3162731353U;
unsigned int var_7 = 2548541084U;
unsigned int var_8 = 2036802586U;
short var_10 = (short)-30514;
unsigned int var_12 = 1770009025U;
int zero = 0;
unsigned int var_13 = 518691134U;
unsigned int var_14 = 377754134U;
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
