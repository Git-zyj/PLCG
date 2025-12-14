#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2094903329;
short var_3 = (short)18857;
short var_5 = (short)-8701;
short var_9 = (short)-27298;
int zero = 0;
int var_12 = -1649496768;
short var_13 = (short)3437;
short var_14 = (short)31385;
short var_15 = (short)-948;
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
