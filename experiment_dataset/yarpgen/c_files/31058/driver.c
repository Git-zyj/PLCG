#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)30;
short var_4 = (short)8208;
unsigned short var_6 = (unsigned short)20492;
unsigned int var_9 = 2938546902U;
signed char var_10 = (signed char)-47;
int zero = 0;
signed char var_11 = (signed char)104;
unsigned char var_12 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
