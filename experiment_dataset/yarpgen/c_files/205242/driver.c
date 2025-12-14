#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)243;
int var_5 = 200998158;
short var_8 = (short)7828;
int var_9 = 1038557530;
unsigned long long int var_10 = 2300582276797243293ULL;
int var_11 = 2100572483;
int zero = 0;
unsigned char var_12 = (unsigned char)20;
int var_13 = 141440526;
void init() {
}

void checksum() {
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
