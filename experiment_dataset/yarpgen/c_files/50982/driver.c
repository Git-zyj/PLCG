#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1637411085;
short var_3 = (short)-17615;
int var_4 = -1000556693;
short var_11 = (short)-11553;
unsigned short var_12 = (unsigned short)26797;
int zero = 0;
unsigned char var_13 = (unsigned char)47;
short var_14 = (short)-782;
short var_15 = (short)-5047;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
