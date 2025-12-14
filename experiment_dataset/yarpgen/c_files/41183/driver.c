#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1824691961;
signed char var_4 = (signed char)-8;
short var_5 = (short)5231;
unsigned char var_8 = (unsigned char)112;
short var_17 = (short)-30803;
int zero = 0;
short var_18 = (short)8214;
unsigned int var_19 = 2667835844U;
signed char var_20 = (signed char)91;
void init() {
}

void checksum() {
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
