#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 3220618328239068992LL;
long long int var_5 = -3709027862560946045LL;
short var_10 = (short)-23910;
int var_11 = -135120772;
int zero = 0;
unsigned char var_16 = (unsigned char)162;
short var_17 = (short)-6958;
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
