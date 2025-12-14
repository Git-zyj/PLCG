#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -721089473;
_Bool var_4 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)111;
unsigned short var_14 = (unsigned short)34695;
unsigned short var_15 = (unsigned short)65038;
unsigned short var_16 = (unsigned short)55116;
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
