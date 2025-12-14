#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2571434305973908446LL;
_Bool var_2 = (_Bool)1;
long long int var_4 = -7461097563730952908LL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)242;
unsigned char var_8 = (unsigned char)23;
unsigned int var_11 = 1031139700U;
int zero = 0;
short var_12 = (short)-12482;
unsigned char var_13 = (unsigned char)116;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-15002;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
