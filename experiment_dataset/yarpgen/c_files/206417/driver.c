#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)29339;
unsigned int var_4 = 2854079615U;
unsigned char var_7 = (unsigned char)138;
int zero = 0;
unsigned long long int var_11 = 6936452041628888610ULL;
short var_12 = (short)-25978;
unsigned int var_13 = 1409004741U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
