#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)66;
unsigned int var_3 = 3878389363U;
unsigned short var_6 = (unsigned short)62752;
int zero = 0;
long long int var_15 = -1123720701065269046LL;
unsigned char var_16 = (unsigned char)172;
unsigned char var_17 = (unsigned char)120;
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
