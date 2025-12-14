#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19710;
signed char var_2 = (signed char)32;
signed char var_7 = (signed char)81;
unsigned long long int var_12 = 12831082578262677270ULL;
short var_13 = (short)-5213;
int zero = 0;
unsigned char var_15 = (unsigned char)58;
unsigned short var_16 = (unsigned short)16119;
unsigned short var_17 = (unsigned short)39427;
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
