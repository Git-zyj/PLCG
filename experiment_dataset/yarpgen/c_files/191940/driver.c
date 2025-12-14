#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63486;
signed char var_3 = (signed char)91;
unsigned short var_4 = (unsigned short)38073;
unsigned int var_8 = 3380987373U;
signed char var_10 = (signed char)-77;
short var_12 = (short)-18750;
short var_13 = (short)20236;
unsigned short var_15 = (unsigned short)27554;
int zero = 0;
unsigned short var_16 = (unsigned short)55411;
int var_17 = 988540206;
unsigned long long int var_18 = 17765032608602139762ULL;
void init() {
}

void checksum() {
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
