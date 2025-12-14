#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)35;
_Bool var_2 = (_Bool)1;
int var_4 = 761016712;
signed char var_8 = (signed char)119;
unsigned char var_11 = (unsigned char)18;
unsigned short var_13 = (unsigned short)29329;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)101;
unsigned char var_16 = (unsigned char)13;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
