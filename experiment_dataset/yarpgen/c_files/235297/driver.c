#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20091;
signed char var_1 = (signed char)70;
signed char var_8 = (signed char)45;
_Bool var_11 = (_Bool)1;
unsigned short var_19 = (unsigned short)39753;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)30;
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
