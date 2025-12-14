#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2002908548228753086ULL;
unsigned char var_4 = (unsigned char)133;
short var_6 = (short)23850;
unsigned int var_11 = 2872862444U;
long long int var_12 = 6443522913392053602LL;
int zero = 0;
short var_13 = (short)-3813;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
