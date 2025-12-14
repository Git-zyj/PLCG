#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)70;
short var_10 = (short)22908;
unsigned short var_15 = (unsigned short)6952;
int zero = 0;
int var_16 = 1750058124;
unsigned long long int var_17 = 8861053021623862112ULL;
unsigned char var_18 = (unsigned char)240;
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
