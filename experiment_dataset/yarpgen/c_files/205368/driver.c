#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)117;
signed char var_5 = (signed char)-63;
int var_6 = 1820799282;
unsigned char var_10 = (unsigned char)123;
signed char var_11 = (signed char)104;
_Bool var_13 = (_Bool)0;
unsigned short var_17 = (unsigned short)46999;
int zero = 0;
short var_20 = (short)-8068;
unsigned char var_21 = (unsigned char)140;
unsigned int var_22 = 250803210U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
