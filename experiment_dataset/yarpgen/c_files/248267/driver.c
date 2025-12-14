#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2227390038U;
long long int var_8 = -5094107848739851881LL;
signed char var_10 = (signed char)-57;
short var_11 = (short)-16279;
unsigned char var_12 = (unsigned char)103;
int zero = 0;
signed char var_15 = (signed char)87;
_Bool var_16 = (_Bool)1;
short var_17 = (short)29254;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
