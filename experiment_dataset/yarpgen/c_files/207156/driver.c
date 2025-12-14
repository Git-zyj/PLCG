#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62810;
signed char var_5 = (signed char)118;
short var_6 = (short)-15989;
short var_8 = (short)24142;
int zero = 0;
short var_10 = (short)-14672;
unsigned int var_11 = 2945349576U;
int var_12 = -777917941;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
