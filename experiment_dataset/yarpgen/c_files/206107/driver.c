#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)2734;
unsigned int var_11 = 3143885680U;
int zero = 0;
unsigned long long int var_12 = 3891454213209511814ULL;
unsigned char var_13 = (unsigned char)185;
unsigned int var_14 = 3633614551U;
unsigned char var_15 = (unsigned char)3;
unsigned short var_16 = (unsigned short)52314;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
