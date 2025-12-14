#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22484;
unsigned short var_2 = (unsigned short)33063;
signed char var_3 = (signed char)105;
unsigned long long int var_10 = 5067618274849112338ULL;
short var_14 = (short)-17992;
unsigned int var_17 = 2888781054U;
int zero = 0;
signed char var_18 = (signed char)88;
unsigned char var_19 = (unsigned char)232;
signed char var_20 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
