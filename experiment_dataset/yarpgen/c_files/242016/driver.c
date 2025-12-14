#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1708981914479447236ULL;
short var_16 = (short)-24193;
signed char var_17 = (signed char)46;
short var_18 = (short)20690;
int zero = 0;
unsigned char var_20 = (unsigned char)144;
unsigned char var_21 = (unsigned char)7;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
