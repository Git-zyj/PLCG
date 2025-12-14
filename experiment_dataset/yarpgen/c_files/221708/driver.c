#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1676745967;
int var_2 = -683501517;
unsigned short var_6 = (unsigned short)22138;
int var_8 = -2069386819;
short var_11 = (short)10588;
int var_12 = 1339688097;
int zero = 0;
short var_14 = (short)-23041;
int var_15 = 912340541;
void init() {
}

void checksum() {
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
