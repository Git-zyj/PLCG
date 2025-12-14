#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4986632731477303533LL;
unsigned short var_2 = (unsigned short)1248;
unsigned short var_4 = (unsigned short)2230;
long long int var_5 = -4489656626459253500LL;
long long int var_6 = -8278911115409164492LL;
signed char var_9 = (signed char)26;
unsigned char var_10 = (unsigned char)157;
int zero = 0;
unsigned short var_12 = (unsigned short)62400;
unsigned int var_13 = 1804213403U;
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
