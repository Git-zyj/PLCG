#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)83;
unsigned int var_5 = 1768000381U;
unsigned char var_7 = (unsigned char)140;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)4168;
unsigned short var_12 = (unsigned short)44920;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
