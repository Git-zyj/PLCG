#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8522768973452170620ULL;
unsigned short var_2 = (unsigned short)44072;
int var_10 = -212645811;
int zero = 0;
short var_13 = (short)29402;
int var_14 = -1365998061;
short var_15 = (short)21028;
long long int var_16 = -4647744635807482505LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
