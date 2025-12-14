#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14144465968168850657ULL;
signed char var_4 = (signed char)58;
unsigned short var_6 = (unsigned short)5912;
short var_17 = (short)-7786;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)14024;
unsigned long long int var_22 = 3732061325951756864ULL;
long long int var_23 = 88906008412318951LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
