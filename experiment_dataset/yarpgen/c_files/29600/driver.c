#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26785;
unsigned short var_7 = (unsigned short)45274;
unsigned long long int var_9 = 862594125902952929ULL;
int var_12 = -487309144;
int zero = 0;
short var_15 = (short)-730;
unsigned short var_16 = (unsigned short)14066;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
