#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -645949090;
unsigned int var_6 = 2522728601U;
unsigned int var_9 = 1499413064U;
signed char var_10 = (signed char)44;
short var_11 = (short)-4397;
int zero = 0;
unsigned int var_12 = 4124396067U;
unsigned short var_13 = (unsigned short)51490;
unsigned int var_14 = 2441818703U;
unsigned char var_15 = (unsigned char)236;
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
