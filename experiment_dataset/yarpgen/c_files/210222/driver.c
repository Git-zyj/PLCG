#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)209;
unsigned char var_3 = (unsigned char)131;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2835351466U;
unsigned short var_6 = (unsigned short)25588;
unsigned long long int var_11 = 8624028843224415989ULL;
short var_17 = (short)-17965;
int zero = 0;
int var_18 = -169912215;
unsigned int var_19 = 2251393135U;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
