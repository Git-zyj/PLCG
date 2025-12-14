#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_6 = (signed char)-87;
unsigned char var_13 = (unsigned char)179;
unsigned short var_17 = (unsigned short)55373;
int zero = 0;
short var_18 = (short)-18680;
unsigned char var_19 = (unsigned char)4;
void init() {
}

void checksum() {
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
