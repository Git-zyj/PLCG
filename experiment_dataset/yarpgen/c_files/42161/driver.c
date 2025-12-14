#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 477503472;
unsigned short var_8 = (unsigned short)44267;
unsigned long long int var_13 = 94139389869702541ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)167;
unsigned int var_15 = 4025589629U;
unsigned char var_16 = (unsigned char)184;
short var_17 = (short)-1828;
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
