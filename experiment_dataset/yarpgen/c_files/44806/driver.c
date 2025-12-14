#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19617;
unsigned short var_11 = (unsigned short)54732;
int zero = 0;
unsigned char var_14 = (unsigned char)32;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1935499799U;
int var_17 = -177914876;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
