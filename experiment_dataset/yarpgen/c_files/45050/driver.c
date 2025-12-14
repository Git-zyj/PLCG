#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_4 = (_Bool)0;
long long int var_6 = -8914613709496169388LL;
unsigned short var_11 = (unsigned short)31097;
unsigned char var_16 = (unsigned char)179;
unsigned short var_18 = (unsigned short)22968;
int zero = 0;
unsigned int var_20 = 3151062494U;
signed char var_21 = (signed char)-86;
unsigned char var_22 = (unsigned char)213;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
