#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9939;
unsigned short var_2 = (unsigned short)7155;
int var_5 = -164040456;
short var_7 = (short)-979;
signed char var_10 = (signed char)103;
signed char var_11 = (signed char)9;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)20028;
void init() {
}

void checksum() {
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
