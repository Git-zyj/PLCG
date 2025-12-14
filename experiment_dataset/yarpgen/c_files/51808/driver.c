#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)20;
short var_4 = (short)15420;
short var_9 = (short)-22790;
int var_10 = 848439053;
unsigned short var_11 = (unsigned short)41761;
int zero = 0;
unsigned short var_12 = (unsigned short)37474;
unsigned long long int var_13 = 17744723914855290004ULL;
int var_14 = -1095628697;
void init() {
}

void checksum() {
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
