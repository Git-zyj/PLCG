#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 796539983;
unsigned long long int var_2 = 4659177534075197593ULL;
unsigned char var_5 = (unsigned char)168;
short var_6 = (short)14476;
short var_9 = (short)-2805;
int zero = 0;
signed char var_15 = (signed char)-25;
unsigned char var_16 = (unsigned char)215;
short var_17 = (short)-6678;
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
