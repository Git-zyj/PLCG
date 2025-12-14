#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)13220;
unsigned short var_6 = (unsigned short)17726;
unsigned short var_8 = (unsigned short)4724;
unsigned int var_10 = 3014950121U;
unsigned char var_15 = (unsigned char)222;
int zero = 0;
unsigned short var_16 = (unsigned short)37017;
short var_17 = (short)-8102;
unsigned int var_18 = 732147853U;
unsigned short var_19 = (unsigned short)63419;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
