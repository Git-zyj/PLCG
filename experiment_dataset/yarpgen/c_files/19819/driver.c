#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17427845750808782767ULL;
short var_3 = (short)29050;
signed char var_8 = (signed char)-104;
int zero = 0;
unsigned long long int var_11 = 6835171390757855238ULL;
unsigned short var_12 = (unsigned short)14978;
unsigned int var_13 = 3625457551U;
unsigned char var_14 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
