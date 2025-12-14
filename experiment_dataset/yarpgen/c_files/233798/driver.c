#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -75723337;
unsigned short var_5 = (unsigned short)29579;
unsigned char var_7 = (unsigned char)149;
unsigned char var_11 = (unsigned char)118;
unsigned char var_13 = (unsigned char)104;
int zero = 0;
unsigned char var_16 = (unsigned char)6;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)179;
void init() {
}

void checksum() {
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
