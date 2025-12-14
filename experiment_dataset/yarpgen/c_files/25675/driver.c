#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16164408772898919440ULL;
short var_6 = (short)-12546;
unsigned long long int var_7 = 9679994436980205269ULL;
unsigned long long int var_8 = 1098208831361877474ULL;
short var_13 = (short)-19233;
int zero = 0;
unsigned int var_17 = 2533400172U;
unsigned long long int var_18 = 14903208749941905658ULL;
unsigned char var_19 = (unsigned char)122;
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
