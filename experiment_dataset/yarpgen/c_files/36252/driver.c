#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20909;
_Bool var_1 = (_Bool)1;
short var_4 = (short)2424;
signed char var_5 = (signed char)14;
unsigned short var_6 = (unsigned short)18014;
short var_7 = (short)-8235;
unsigned short var_8 = (unsigned short)39605;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)11880;
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
