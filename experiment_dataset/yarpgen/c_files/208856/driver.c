#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
short var_3 = (short)20850;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)83;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)42;
unsigned int var_10 = 486695897U;
int zero = 0;
signed char var_16 = (signed char)56;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-75;
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
