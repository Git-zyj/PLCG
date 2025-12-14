#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)315;
unsigned short var_9 = (unsigned short)56544;
signed char var_11 = (signed char)71;
signed char var_13 = (signed char)4;
int zero = 0;
long long int var_14 = -6448308789419379587LL;
short var_15 = (short)20519;
int var_16 = -586020933;
short var_17 = (short)-4605;
long long int var_18 = 8964059708060744142LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
