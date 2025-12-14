#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19921;
short var_2 = (short)12981;
unsigned long long int var_4 = 400796287985668217ULL;
signed char var_6 = (signed char)83;
unsigned short var_14 = (unsigned short)52291;
int zero = 0;
unsigned char var_15 = (unsigned char)199;
short var_16 = (short)-28916;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
