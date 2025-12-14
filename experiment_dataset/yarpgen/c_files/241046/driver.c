#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11931;
signed char var_5 = (signed char)7;
unsigned int var_7 = 347865720U;
short var_12 = (short)18316;
int zero = 0;
unsigned char var_14 = (unsigned char)195;
unsigned short var_15 = (unsigned short)26298;
unsigned char var_16 = (unsigned char)127;
unsigned long long int var_17 = 323344341956886581ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
