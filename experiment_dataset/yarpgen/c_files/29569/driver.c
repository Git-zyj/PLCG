#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58062;
long long int var_1 = 748164516238090170LL;
int var_6 = -747967548;
unsigned char var_14 = (unsigned char)201;
int zero = 0;
signed char var_15 = (signed char)-126;
unsigned char var_16 = (unsigned char)169;
unsigned int var_17 = 763285473U;
short var_18 = (short)-16813;
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
