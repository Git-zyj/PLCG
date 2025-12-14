#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-21585;
unsigned short var_5 = (unsigned short)14800;
signed char var_9 = (signed char)122;
unsigned int var_11 = 2768258964U;
int zero = 0;
unsigned int var_16 = 3561281208U;
short var_17 = (short)-23130;
int var_18 = 760952699;
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
