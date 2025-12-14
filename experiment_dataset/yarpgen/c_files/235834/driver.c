#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_4 = (short)-24881;
unsigned short var_7 = (unsigned short)5183;
long long int var_10 = 8902832099466462233LL;
signed char var_11 = (signed char)22;
int zero = 0;
int var_12 = 1725763434;
long long int var_13 = -8970828591116681399LL;
void init() {
}

void checksum() {
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
