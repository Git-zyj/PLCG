#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)96;
_Bool var_12 = (_Bool)1;
unsigned short var_15 = (unsigned short)43638;
int zero = 0;
short var_17 = (short)24701;
int var_18 = -1422842240;
unsigned short var_19 = (unsigned short)30738;
unsigned char var_20 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
