#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 618710885151500028LL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)23787;
short var_10 = (short)8355;
int zero = 0;
short var_15 = (short)784;
unsigned char var_16 = (unsigned char)239;
short var_17 = (short)1317;
unsigned short var_18 = (unsigned short)59892;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
