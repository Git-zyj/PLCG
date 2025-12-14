#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)24;
unsigned short var_2 = (unsigned short)35892;
short var_4 = (short)-20265;
unsigned int var_6 = 2707176866U;
int zero = 0;
unsigned long long int var_11 = 14171792416124444265ULL;
unsigned short var_12 = (unsigned short)21235;
unsigned short var_13 = (unsigned short)51613;
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
