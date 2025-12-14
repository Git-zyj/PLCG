#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1218867761;
unsigned short var_1 = (unsigned short)23519;
short var_3 = (short)12847;
unsigned short var_5 = (unsigned short)6634;
unsigned int var_6 = 1201525586U;
short var_8 = (short)1968;
unsigned int var_11 = 660577304U;
unsigned char var_12 = (unsigned char)165;
int zero = 0;
unsigned short var_13 = (unsigned short)51996;
short var_14 = (short)-21668;
unsigned int var_15 = 1262458367U;
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
