#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15717616390577860956ULL;
unsigned char var_2 = (unsigned char)0;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)16923;
unsigned short var_15 = (unsigned short)1739;
long long int var_16 = -6513813901664016366LL;
int zero = 0;
unsigned int var_17 = 792419606U;
unsigned char var_18 = (unsigned char)180;
short var_19 = (short)-29002;
void init() {
}

void checksum() {
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
