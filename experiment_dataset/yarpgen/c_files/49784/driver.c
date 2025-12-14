#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5879;
unsigned char var_4 = (unsigned char)232;
unsigned char var_6 = (unsigned char)231;
unsigned int var_8 = 420402364U;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_12 = -574467460;
unsigned int var_13 = 3568837310U;
unsigned int var_14 = 2860195557U;
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
