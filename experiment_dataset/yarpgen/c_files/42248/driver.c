#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1383036191;
unsigned int var_7 = 298483715U;
long long int var_9 = -7691680971723789265LL;
unsigned int var_13 = 1363955681U;
int zero = 0;
unsigned short var_20 = (unsigned short)21094;
unsigned char var_21 = (unsigned char)85;
unsigned char var_22 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
