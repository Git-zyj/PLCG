#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55079;
unsigned int var_1 = 3479954342U;
unsigned char var_4 = (unsigned char)60;
unsigned char var_6 = (unsigned char)190;
short var_7 = (short)-32726;
unsigned long long int var_10 = 13320207915543131803ULL;
int zero = 0;
unsigned int var_14 = 1310710999U;
unsigned long long int var_15 = 13119659576355878761ULL;
short var_16 = (short)-23137;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
