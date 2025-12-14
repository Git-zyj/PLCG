#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 404665987;
int var_1 = -467196962;
short var_2 = (short)-22118;
short var_3 = (short)-22257;
unsigned char var_4 = (unsigned char)153;
unsigned int var_5 = 893509463U;
unsigned char var_8 = (unsigned char)228;
int zero = 0;
int var_10 = 2127466800;
short var_11 = (short)18702;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
