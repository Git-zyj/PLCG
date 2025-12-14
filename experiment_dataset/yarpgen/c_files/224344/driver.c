#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5350009886204353050ULL;
long long int var_4 = -3161715290215700980LL;
int var_5 = 1710258658;
short var_8 = (short)25589;
long long int var_10 = 5265837364452871177LL;
short var_11 = (short)-28900;
int zero = 0;
short var_14 = (short)-8518;
unsigned char var_15 = (unsigned char)35;
unsigned long long int var_16 = 14023769239165102005ULL;
long long int var_17 = -1048943234396173310LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
