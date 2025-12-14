#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24863;
short var_1 = (short)15905;
unsigned char var_2 = (unsigned char)125;
unsigned char var_3 = (unsigned char)116;
unsigned char var_4 = (unsigned char)253;
short var_5 = (short)22249;
short var_11 = (short)-32443;
unsigned char var_12 = (unsigned char)139;
short var_14 = (short)22391;
int zero = 0;
short var_17 = (short)-29114;
short var_18 = (short)-10799;
short var_19 = (short)30517;
unsigned char var_20 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
