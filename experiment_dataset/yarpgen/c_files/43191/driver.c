#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16266286596252376089ULL;
int var_1 = -175544378;
unsigned short var_3 = (unsigned short)23987;
int var_5 = -402378920;
long long int var_7 = -943176692906086338LL;
long long int var_8 = 4695993419777163887LL;
unsigned char var_14 = (unsigned char)248;
int zero = 0;
unsigned char var_15 = (unsigned char)8;
int var_16 = 638820689;
signed char var_17 = (signed char)111;
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
