#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2925747051U;
unsigned long long int var_2 = 979754508250492232ULL;
unsigned short var_5 = (unsigned short)13462;
unsigned long long int var_8 = 8886660920923493145ULL;
unsigned char var_14 = (unsigned char)250;
unsigned short var_15 = (unsigned short)44877;
int zero = 0;
unsigned long long int var_16 = 503396619259957186ULL;
unsigned short var_17 = (unsigned short)4930;
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
