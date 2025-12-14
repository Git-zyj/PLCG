#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2268000293U;
unsigned short var_8 = (unsigned short)26805;
unsigned short var_10 = (unsigned short)17774;
unsigned char var_14 = (unsigned char)130;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)22849;
unsigned short var_18 = (unsigned short)30127;
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
