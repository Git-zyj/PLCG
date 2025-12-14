#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13782122761525384898ULL;
short var_6 = (short)15329;
unsigned char var_8 = (unsigned char)82;
short var_13 = (short)-9087;
int var_14 = 515441485;
int zero = 0;
short var_16 = (short)-8006;
int var_17 = -63985179;
short var_18 = (short)15140;
short var_19 = (short)5361;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
