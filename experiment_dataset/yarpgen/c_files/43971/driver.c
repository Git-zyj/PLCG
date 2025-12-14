#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 212370027;
short var_1 = (short)-31221;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)-116;
short var_7 = (short)5609;
unsigned short var_9 = (unsigned short)8702;
int zero = 0;
signed char var_12 = (signed char)69;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)53;
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
