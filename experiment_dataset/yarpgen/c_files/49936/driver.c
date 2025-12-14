#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12482524476185080616ULL;
unsigned short var_5 = (unsigned short)55721;
unsigned long long int var_7 = 13177487860152469613ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 4142328600U;
short var_14 = (short)4927;
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
