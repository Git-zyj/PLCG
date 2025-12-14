#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1411763607;
signed char var_7 = (signed char)-3;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)12;
unsigned short var_13 = (unsigned short)19298;
int var_15 = 770172753;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = 1267833248;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
