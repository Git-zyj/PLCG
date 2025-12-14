#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -291741207;
unsigned char var_7 = (unsigned char)35;
unsigned short var_9 = (unsigned short)20984;
int zero = 0;
int var_10 = -1516779760;
int var_11 = -1075053004;
unsigned char var_12 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
