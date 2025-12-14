#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28284;
unsigned short var_5 = (unsigned short)61719;
signed char var_10 = (signed char)-78;
int var_11 = 666354953;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-3544;
unsigned short var_22 = (unsigned short)29868;
int var_23 = 2120273144;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
