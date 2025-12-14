#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)63800;
short var_8 = (short)-17644;
unsigned int var_9 = 944697438U;
unsigned char var_10 = (unsigned char)202;
int zero = 0;
short var_11 = (short)-9231;
unsigned char var_12 = (unsigned char)89;
void init() {
}

void checksum() {
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
