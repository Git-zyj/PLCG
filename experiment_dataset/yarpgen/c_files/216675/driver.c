#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3601782071726749048ULL;
signed char var_5 = (signed char)111;
unsigned char var_11 = (unsigned char)43;
int zero = 0;
long long int var_14 = -470634770781084972LL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)19435;
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
