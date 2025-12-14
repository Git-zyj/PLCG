#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-7446;
int var_11 = 100795603;
unsigned char var_12 = (unsigned char)141;
short var_14 = (short)12690;
int zero = 0;
short var_17 = (short)32664;
short var_18 = (short)-25435;
void init() {
}

void checksum() {
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
