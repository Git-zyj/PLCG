#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)29;
int var_7 = 1531485744;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 6951110575914139651ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)168;
signed char var_14 = (signed char)32;
unsigned int var_15 = 3076890031U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
