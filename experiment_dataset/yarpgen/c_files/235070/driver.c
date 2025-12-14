#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 61553087;
unsigned long long int var_6 = 5192697658117095456ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_13 = 6271822031241848837ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)17106;
unsigned short var_15 = (unsigned short)14405;
unsigned short var_16 = (unsigned short)37458;
void init() {
}

void checksum() {
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
