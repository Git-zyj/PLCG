#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)158;
int var_11 = 1555121736;
signed char var_12 = (signed char)-119;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)45316;
unsigned long long int var_19 = 8776005419377700974ULL;
short var_20 = (short)29909;
unsigned int var_21 = 3828202965U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
