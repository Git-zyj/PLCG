#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
unsigned int var_1 = 3722349115U;
int var_3 = -1328955779;
unsigned int var_4 = 3248112759U;
short var_5 = (short)-540;
unsigned char var_10 = (unsigned char)151;
int var_12 = -935121265;
unsigned long long int var_15 = 2007012261117786363ULL;
int zero = 0;
long long int var_16 = 177243789815472358LL;
unsigned long long int var_17 = 15004119979031933649ULL;
void init() {
}

void checksum() {
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
