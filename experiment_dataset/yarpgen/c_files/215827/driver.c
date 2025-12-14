#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2069211999;
int var_4 = 1533930653;
unsigned short var_6 = (unsigned short)30392;
int var_10 = 1802886369;
short var_16 = (short)10427;
short var_18 = (short)-17377;
unsigned long long int var_19 = 16917415150491413727ULL;
int zero = 0;
int var_20 = -2145825766;
unsigned char var_21 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
