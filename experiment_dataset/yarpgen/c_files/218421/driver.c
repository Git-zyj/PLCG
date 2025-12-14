#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)165;
unsigned short var_5 = (unsigned short)8399;
unsigned char var_6 = (unsigned char)49;
signed char var_10 = (signed char)6;
int zero = 0;
unsigned char var_11 = (unsigned char)230;
unsigned short var_12 = (unsigned short)31932;
unsigned short var_13 = (unsigned short)29218;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
