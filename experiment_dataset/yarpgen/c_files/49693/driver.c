#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16015478567767188053ULL;
int var_6 = -1399649290;
unsigned char var_10 = (unsigned char)126;
unsigned short var_12 = (unsigned short)18790;
short var_13 = (short)-18403;
int zero = 0;
unsigned int var_15 = 968691694U;
signed char var_16 = (signed char)-113;
int var_17 = -1131808789;
unsigned char var_18 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
