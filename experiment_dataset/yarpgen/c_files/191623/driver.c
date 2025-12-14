#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1312333518;
int var_12 = 22624968;
unsigned short var_13 = (unsigned short)26390;
short var_14 = (short)-22529;
int zero = 0;
unsigned short var_15 = (unsigned short)61754;
signed char var_16 = (signed char)-85;
signed char var_17 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
