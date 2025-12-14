#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 981886046U;
long long int var_1 = 7580357277373979132LL;
unsigned short var_4 = (unsigned short)29608;
unsigned long long int var_5 = 14880873173478566307ULL;
unsigned char var_6 = (unsigned char)7;
int zero = 0;
int var_10 = -2143110749;
short var_11 = (short)-12587;
unsigned short var_12 = (unsigned short)14441;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
