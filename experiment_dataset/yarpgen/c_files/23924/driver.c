#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4606383418459303503LL;
unsigned char var_4 = (unsigned char)44;
signed char var_8 = (signed char)101;
int var_12 = -131123463;
unsigned short var_15 = (unsigned short)47204;
unsigned long long int var_16 = 6678924645496917415ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)97;
unsigned int var_18 = 3698186410U;
short var_19 = (short)-32030;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
