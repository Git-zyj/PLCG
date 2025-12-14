#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17055340195627891812ULL;
int var_5 = -1032509316;
unsigned short var_8 = (unsigned short)24460;
int zero = 0;
unsigned int var_16 = 1109924985U;
unsigned short var_17 = (unsigned short)31098;
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
