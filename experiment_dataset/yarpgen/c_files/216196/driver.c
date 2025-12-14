#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20285;
unsigned char var_6 = (unsigned char)185;
_Bool var_7 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)183;
int zero = 0;
int var_19 = 1632283220;
short var_20 = (short)-25490;
unsigned short var_21 = (unsigned short)30151;
int var_22 = 1961384023;
unsigned short var_23 = (unsigned short)48854;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
