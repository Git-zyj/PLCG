#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62117;
signed char var_1 = (signed char)-12;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-7912;
unsigned short var_7 = (unsigned short)16778;
unsigned char var_8 = (unsigned char)171;
short var_10 = (short)-25866;
signed char var_12 = (signed char)36;
int zero = 0;
long long int var_14 = -5933161179459172072LL;
short var_15 = (short)-5986;
unsigned char var_16 = (unsigned char)159;
void init() {
}

void checksum() {
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
