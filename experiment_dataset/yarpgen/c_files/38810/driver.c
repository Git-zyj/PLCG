#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30464;
short var_4 = (short)-19925;
unsigned short var_10 = (unsigned short)37915;
unsigned short var_13 = (unsigned short)34958;
unsigned short var_14 = (unsigned short)43426;
int zero = 0;
short var_16 = (short)-1297;
unsigned short var_17 = (unsigned short)4254;
short var_18 = (short)-3650;
void init() {
}

void checksum() {
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
