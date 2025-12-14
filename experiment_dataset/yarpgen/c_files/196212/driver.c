#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 132337759;
unsigned char var_3 = (unsigned char)234;
unsigned short var_6 = (unsigned short)21383;
int var_7 = 841828685;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 15597414564224760203ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)22535;
short var_14 = (short)-18518;
unsigned short var_15 = (unsigned short)35914;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
