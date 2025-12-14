#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)111;
_Bool var_8 = (_Bool)1;
signed char var_11 = (signed char)-66;
int zero = 0;
unsigned long long int var_13 = 11840024761917925812ULL;
short var_14 = (short)-14723;
long long int var_15 = -2952364627560066615LL;
unsigned short var_16 = (unsigned short)32766;
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
