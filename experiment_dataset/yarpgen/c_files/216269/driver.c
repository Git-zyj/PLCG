#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-8740;
unsigned short var_13 = (unsigned short)12016;
unsigned short var_14 = (unsigned short)16733;
unsigned short var_15 = (unsigned short)1126;
int zero = 0;
short var_18 = (short)20553;
unsigned short var_19 = (unsigned short)46179;
short var_20 = (short)7205;
short var_21 = (short)5784;
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
