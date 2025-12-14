#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 219292198;
short var_5 = (short)5103;
unsigned char var_7 = (unsigned char)130;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)30656;
unsigned int var_18 = 3217998960U;
void init() {
}

void checksum() {
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
