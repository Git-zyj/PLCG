#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1087575479;
unsigned char var_6 = (unsigned char)58;
unsigned short var_8 = (unsigned short)46815;
unsigned short var_14 = (unsigned short)37761;
int var_17 = -1304040950;
int zero = 0;
unsigned long long int var_20 = 4535856613219233920ULL;
int var_21 = -648330648;
void init() {
}

void checksum() {
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
