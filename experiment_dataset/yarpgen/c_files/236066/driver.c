#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)4581;
unsigned char var_6 = (unsigned char)8;
unsigned long long int var_7 = 7876917954429881496ULL;
signed char var_12 = (signed char)-32;
int zero = 0;
unsigned long long int var_15 = 13441102992011873221ULL;
unsigned char var_16 = (unsigned char)157;
unsigned short var_17 = (unsigned short)8090;
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
