#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)32724;
int var_7 = -1121053786;
_Bool var_8 = (_Bool)0;
unsigned short var_12 = (unsigned short)18749;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)35722;
unsigned short var_15 = (unsigned short)53859;
signed char var_16 = (signed char)54;
int var_17 = -534220629;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
