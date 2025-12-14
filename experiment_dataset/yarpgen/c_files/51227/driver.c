#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)253;
unsigned short var_7 = (unsigned short)26681;
unsigned short var_13 = (unsigned short)11784;
int zero = 0;
unsigned char var_14 = (unsigned char)147;
int var_15 = -758993069;
unsigned int var_16 = 1500053939U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
