#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)50377;
int var_7 = -1096870852;
short var_8 = (short)1211;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 2990869254U;
int zero = 0;
short var_13 = (short)20305;
unsigned int var_14 = 1672427668U;
int var_15 = 813705247;
unsigned int var_16 = 1626290104U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
