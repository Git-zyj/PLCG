#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48512;
unsigned short var_1 = (unsigned short)36688;
int var_4 = 1823764911;
unsigned long long int var_6 = 3604255332380030184ULL;
unsigned char var_8 = (unsigned char)178;
unsigned int var_11 = 1276105360U;
unsigned short var_12 = (unsigned short)25708;
int zero = 0;
short var_13 = (short)2872;
short var_14 = (short)24950;
unsigned int var_15 = 42346631U;
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
