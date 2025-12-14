#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15608906486633152865ULL;
unsigned int var_3 = 641046885U;
signed char var_8 = (signed char)5;
unsigned int var_11 = 2063072326U;
unsigned char var_12 = (unsigned char)200;
int zero = 0;
short var_15 = (short)-4652;
short var_16 = (short)8307;
short var_17 = (short)-26918;
void init() {
}

void checksum() {
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
