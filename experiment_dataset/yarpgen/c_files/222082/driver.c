#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)16666;
short var_4 = (short)6622;
long long int var_5 = -6309667245583082165LL;
unsigned int var_6 = 1143608841U;
long long int var_7 = -1631383884256657745LL;
short var_10 = (short)27778;
int zero = 0;
int var_14 = 835768569;
unsigned char var_15 = (unsigned char)218;
short var_16 = (short)-16761;
short var_17 = (short)1306;
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
