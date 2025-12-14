#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6475975421129520736ULL;
unsigned long long int var_3 = 18096211743710681753ULL;
short var_4 = (short)-32508;
unsigned short var_6 = (unsigned short)47203;
short var_10 = (short)26371;
int zero = 0;
short var_13 = (short)15283;
unsigned char var_14 = (unsigned char)108;
void init() {
}

void checksum() {
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
