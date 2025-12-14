#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48631;
unsigned long long int var_7 = 6485357780056968686ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)83;
unsigned short var_19 = (unsigned short)58147;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
