#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
short var_3 = (short)26862;
unsigned char var_4 = (unsigned char)8;
long long int var_10 = 2194694851777790541LL;
int var_14 = -1744041387;
int zero = 0;
long long int var_15 = 4584264132736874545LL;
unsigned int var_16 = 2038277082U;
void init() {
}

void checksum() {
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
