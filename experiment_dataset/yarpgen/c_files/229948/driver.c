#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11666;
unsigned short var_5 = (unsigned short)37486;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)45994;
unsigned short var_14 = (unsigned short)21440;
int zero = 0;
unsigned int var_16 = 319097368U;
unsigned int var_17 = 1279254236U;
void init() {
}

void checksum() {
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
