#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7763339306887096728ULL;
unsigned long long int var_1 = 3664522802627970524ULL;
unsigned char var_2 = (unsigned char)185;
int var_4 = -1779818847;
int var_7 = -762364461;
unsigned short var_8 = (unsigned short)40855;
unsigned long long int var_10 = 14483904606465798760ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)37150;
unsigned short var_12 = (unsigned short)7625;
unsigned short var_13 = (unsigned short)42940;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
