#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21167;
signed char var_2 = (signed char)22;
unsigned int var_5 = 1191452514U;
unsigned int var_6 = 2630677U;
long long int var_7 = 3964695003538835575LL;
short var_8 = (short)-508;
unsigned long long int var_12 = 15724887169051255104ULL;
int zero = 0;
signed char var_19 = (signed char)25;
unsigned short var_20 = (unsigned short)42582;
void init() {
}

void checksum() {
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
