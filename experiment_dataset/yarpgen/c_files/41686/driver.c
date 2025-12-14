#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_5 = 1939743738;
unsigned char var_6 = (unsigned char)69;
signed char var_10 = (signed char)117;
signed char var_12 = (signed char)86;
unsigned short var_13 = (unsigned short)62465;
int zero = 0;
unsigned char var_18 = (unsigned char)187;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-13926;
short var_22 = (short)22144;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
