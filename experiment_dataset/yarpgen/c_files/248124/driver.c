#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_5 = -1946729345;
unsigned short var_6 = (unsigned short)34735;
unsigned char var_8 = (unsigned char)133;
unsigned short var_11 = (unsigned short)31564;
int zero = 0;
unsigned short var_13 = (unsigned short)7623;
int var_14 = -150160545;
unsigned int var_15 = 3842461089U;
unsigned char var_16 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
