#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)18810;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)-96;
short var_14 = (short)-7000;
long long int var_16 = 2449023621873352652LL;
int zero = 0;
unsigned char var_20 = (unsigned char)73;
unsigned short var_21 = (unsigned short)30533;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
