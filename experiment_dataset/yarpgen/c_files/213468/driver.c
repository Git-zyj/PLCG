#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42868;
unsigned int var_6 = 310057541U;
unsigned char var_8 = (unsigned char)206;
int zero = 0;
short var_10 = (short)30626;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-11085;
int var_13 = 1110287726;
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
