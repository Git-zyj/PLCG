#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_6 = 3438277461U;
unsigned short var_8 = (unsigned short)18004;
unsigned int var_9 = 302896421U;
signed char var_10 = (signed char)111;
unsigned int var_12 = 4039113870U;
int zero = 0;
signed char var_17 = (signed char)24;
unsigned int var_18 = 1326624759U;
unsigned char var_19 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
