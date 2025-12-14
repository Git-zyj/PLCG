#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-16852;
int var_8 = -112022787;
signed char var_12 = (signed char)96;
short var_13 = (short)-13452;
unsigned int var_14 = 244782156U;
int zero = 0;
int var_15 = -998356075;
unsigned long long int var_16 = 96310313463179094ULL;
unsigned long long int var_17 = 2013063622426573965ULL;
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
