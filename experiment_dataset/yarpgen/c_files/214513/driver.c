#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-62;
unsigned char var_7 = (unsigned char)3;
unsigned short var_10 = (unsigned short)16417;
int var_14 = 1381463053;
unsigned int var_16 = 1983327457U;
int zero = 0;
unsigned short var_18 = (unsigned short)40948;
int var_19 = -655223002;
int var_20 = 1524983033;
short var_21 = (short)-16067;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
