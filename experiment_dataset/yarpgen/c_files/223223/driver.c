#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)253;
unsigned int var_5 = 1157802685U;
unsigned short var_7 = (unsigned short)27898;
int var_11 = -1772920354;
int var_13 = -1132591061;
unsigned int var_14 = 866075508U;
int zero = 0;
unsigned short var_15 = (unsigned short)29374;
unsigned int var_16 = 480989380U;
void init() {
}

void checksum() {
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
