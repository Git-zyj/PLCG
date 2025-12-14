#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3612717496U;
unsigned int var_2 = 3782209052U;
unsigned short var_3 = (unsigned short)37422;
unsigned char var_5 = (unsigned char)117;
unsigned char var_7 = (unsigned char)17;
short var_11 = (short)-25206;
int zero = 0;
long long int var_13 = 7852639340404967202LL;
unsigned long long int var_14 = 8188786592186412345ULL;
unsigned short var_15 = (unsigned short)58833;
int var_16 = 77568243;
long long int var_17 = -4958980107306886187LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
