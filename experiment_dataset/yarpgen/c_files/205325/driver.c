#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5894;
int var_4 = 1174894830;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-8677;
short var_11 = (short)10157;
int zero = 0;
unsigned char var_12 = (unsigned char)121;
signed char var_13 = (signed char)24;
short var_14 = (short)30793;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
