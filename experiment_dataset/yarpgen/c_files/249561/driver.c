#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)54;
int var_6 = -1738878141;
unsigned char var_10 = (unsigned char)171;
int zero = 0;
unsigned int var_11 = 661868625U;
int var_12 = -1518359003;
int var_13 = 50867709;
unsigned short var_14 = (unsigned short)28740;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
