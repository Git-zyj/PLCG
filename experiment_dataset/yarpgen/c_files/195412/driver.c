#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1842061634;
unsigned char var_1 = (unsigned char)231;
unsigned short var_2 = (unsigned short)23924;
short var_7 = (short)18376;
int var_8 = -1551602450;
short var_10 = (short)20163;
int zero = 0;
unsigned short var_12 = (unsigned short)6747;
int var_13 = 396422598;
short var_14 = (short)-22793;
unsigned char var_15 = (unsigned char)164;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
