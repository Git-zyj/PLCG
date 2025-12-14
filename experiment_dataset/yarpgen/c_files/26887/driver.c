#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)1436;
unsigned int var_6 = 4254963346U;
unsigned long long int var_7 = 15265176520744636944ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)20329;
unsigned char var_12 = (unsigned char)227;
unsigned char var_13 = (unsigned char)173;
unsigned short var_14 = (unsigned short)18017;
short var_15 = (short)-7061;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
