#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)29644;
unsigned long long int var_9 = 12712590127638500475ULL;
short var_10 = (short)-9094;
unsigned char var_13 = (unsigned char)89;
int zero = 0;
unsigned int var_17 = 1547335178U;
unsigned char var_18 = (unsigned char)242;
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
