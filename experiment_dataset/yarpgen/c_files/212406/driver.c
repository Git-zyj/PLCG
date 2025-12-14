#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)31;
unsigned int var_1 = 2322123675U;
int var_2 = -234701785;
unsigned char var_3 = (unsigned char)33;
short var_8 = (short)24609;
unsigned char var_9 = (unsigned char)220;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3895566260U;
int var_12 = -1779822494;
unsigned short var_13 = (unsigned short)10080;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
