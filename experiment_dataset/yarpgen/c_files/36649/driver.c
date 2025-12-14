#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2150803635U;
long long int var_1 = 4104338245415089757LL;
_Bool var_2 = (_Bool)1;
int var_14 = -825628719;
short var_17 = (short)21480;
int zero = 0;
short var_20 = (short)24000;
unsigned short var_21 = (unsigned short)56447;
long long int var_22 = -1565595000880635880LL;
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
