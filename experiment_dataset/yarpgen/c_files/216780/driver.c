#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3796259221U;
unsigned int var_5 = 3050759944U;
short var_8 = (short)-9522;
int var_9 = 2019368746;
int zero = 0;
short var_14 = (short)31522;
unsigned char var_15 = (unsigned char)45;
void init() {
}

void checksum() {
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
