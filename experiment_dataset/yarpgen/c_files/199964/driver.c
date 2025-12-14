#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2317779520426152270LL;
short var_10 = (short)21266;
unsigned char var_13 = (unsigned char)214;
unsigned char var_14 = (unsigned char)83;
unsigned char var_15 = (unsigned char)98;
unsigned int var_16 = 1588736534U;
int zero = 0;
unsigned char var_17 = (unsigned char)1;
unsigned long long int var_18 = 11819587313720892555ULL;
unsigned short var_19 = (unsigned short)63724;
unsigned long long int var_20 = 10555518679672364582ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
