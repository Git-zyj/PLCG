#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)49984;
unsigned int var_7 = 254545186U;
unsigned char var_10 = (unsigned char)45;
short var_13 = (short)16039;
int zero = 0;
unsigned short var_16 = (unsigned short)35688;
unsigned char var_17 = (unsigned char)197;
int var_18 = -1844520916;
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
