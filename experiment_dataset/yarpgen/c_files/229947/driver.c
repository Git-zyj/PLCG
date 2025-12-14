#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1051224131438530246LL;
int var_2 = -293061384;
short var_4 = (short)-22838;
long long int var_7 = 5902453008943740877LL;
unsigned int var_9 = 3815792332U;
int zero = 0;
unsigned char var_10 = (unsigned char)239;
short var_11 = (short)-18870;
long long int var_12 = -6695045028139446354LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
