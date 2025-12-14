#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15157;
unsigned int var_5 = 4287591264U;
short var_6 = (short)-10186;
int zero = 0;
short var_11 = (short)29279;
unsigned short var_12 = (unsigned short)18896;
unsigned int var_13 = 1522692507U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
