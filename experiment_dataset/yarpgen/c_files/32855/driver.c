#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
unsigned int var_3 = 3638547862U;
unsigned short var_6 = (unsigned short)37899;
int var_8 = 40968847;
unsigned char var_11 = (unsigned char)212;
unsigned long long int var_12 = 16149634046938954686ULL;
int zero = 0;
unsigned long long int var_17 = 8275674518878320082ULL;
unsigned char var_18 = (unsigned char)90;
unsigned int var_19 = 4220943775U;
void init() {
}

void checksum() {
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
