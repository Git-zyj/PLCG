#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-24278;
long long int var_10 = 1226225811197572782LL;
int var_14 = 1427984987;
int zero = 0;
unsigned int var_15 = 4022410978U;
unsigned int var_16 = 3900596485U;
unsigned short var_17 = (unsigned short)48888;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
