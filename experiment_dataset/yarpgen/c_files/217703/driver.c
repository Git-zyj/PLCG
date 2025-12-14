#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)512;
short var_5 = (short)28152;
signed char var_6 = (signed char)-119;
unsigned short var_9 = (unsigned short)35471;
unsigned short var_12 = (unsigned short)51943;
unsigned short var_13 = (unsigned short)40992;
int zero = 0;
short var_15 = (short)21984;
unsigned short var_16 = (unsigned short)11134;
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
