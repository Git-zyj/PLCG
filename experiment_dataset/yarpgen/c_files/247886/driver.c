#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17179;
long long int var_4 = -6563453445288236805LL;
short var_6 = (short)-5173;
unsigned char var_10 = (unsigned char)171;
unsigned short var_11 = (unsigned short)45535;
int zero = 0;
signed char var_12 = (signed char)-119;
short var_13 = (short)-18352;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
