#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)24450;
unsigned long long int var_13 = 12138331618075326792ULL;
unsigned char var_14 = (unsigned char)171;
unsigned int var_17 = 715018180U;
int zero = 0;
long long int var_18 = -3081760301908176160LL;
unsigned int var_19 = 3272644309U;
void init() {
}

void checksum() {
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
