#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_4 = (short)-4694;
unsigned long long int var_5 = 13154912200575073870ULL;
unsigned char var_7 = (unsigned char)46;
short var_10 = (short)8395;
unsigned short var_12 = (unsigned short)44116;
signed char var_14 = (signed char)4;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-20110;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
