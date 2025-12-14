#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2082500750;
unsigned int var_6 = 737631955U;
int var_7 = 1686784047;
long long int var_8 = 8481351935839596175LL;
short var_12 = (short)8711;
int zero = 0;
int var_13 = -642186005;
short var_14 = (short)-24934;
short var_15 = (short)-1102;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
