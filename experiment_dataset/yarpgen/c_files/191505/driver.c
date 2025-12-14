#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
unsigned short var_1 = (unsigned short)52264;
short var_7 = (short)1582;
unsigned char var_10 = (unsigned char)68;
int zero = 0;
unsigned int var_16 = 3459764234U;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)56337;
unsigned long long int var_19 = 8583869756748764392ULL;
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
