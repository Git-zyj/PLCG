#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5766345412454370304LL;
unsigned short var_2 = (unsigned short)37167;
unsigned char var_6 = (unsigned char)94;
int var_7 = -1721811265;
signed char var_14 = (signed char)-96;
int zero = 0;
unsigned char var_16 = (unsigned char)31;
signed char var_17 = (signed char)-84;
void init() {
}

void checksum() {
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
