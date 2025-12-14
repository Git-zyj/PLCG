#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12811283867461881798ULL;
unsigned int var_3 = 2995115309U;
short var_4 = (short)-1668;
unsigned long long int var_6 = 17110475121820397211ULL;
unsigned char var_9 = (unsigned char)176;
short var_12 = (short)-31672;
int zero = 0;
short var_14 = (short)-21312;
unsigned short var_15 = (unsigned short)5144;
unsigned int var_16 = 3686776838U;
short var_17 = (short)6989;
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
