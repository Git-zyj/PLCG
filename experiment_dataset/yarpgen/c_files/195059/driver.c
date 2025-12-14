#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3830;
unsigned int var_1 = 2884217233U;
unsigned short var_12 = (unsigned short)24471;
short var_13 = (short)-10476;
int var_18 = -502911838;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2331707597U;
long long int var_22 = -6285217609553961413LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
