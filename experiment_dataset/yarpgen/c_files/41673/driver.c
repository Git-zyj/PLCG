#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32694;
int var_10 = 756881553;
unsigned char var_11 = (unsigned char)3;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3372078601U;
short var_16 = (short)-17278;
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
