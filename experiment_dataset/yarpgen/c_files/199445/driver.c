#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 607707745U;
signed char var_6 = (signed char)-60;
unsigned short var_8 = (unsigned short)53217;
unsigned short var_11 = (unsigned short)15537;
int zero = 0;
unsigned long long int var_16 = 7951594856511645774ULL;
int var_17 = 1922575506;
unsigned char var_18 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
