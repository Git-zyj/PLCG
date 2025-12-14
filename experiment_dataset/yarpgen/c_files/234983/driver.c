#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)1;
signed char var_2 = (signed char)(-127 - 1);
unsigned int var_11 = 1393921409U;
long long int var_14 = 7387769152861186824LL;
int zero = 0;
short var_15 = (short)-15414;
short var_16 = (short)-31897;
unsigned char var_17 = (unsigned char)187;
int var_18 = 740566959;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
