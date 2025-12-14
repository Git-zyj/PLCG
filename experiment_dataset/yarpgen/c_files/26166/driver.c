#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)80;
unsigned short var_7 = (unsigned short)19735;
unsigned short var_8 = (unsigned short)44915;
long long int var_11 = 3814509211011542627LL;
unsigned short var_12 = (unsigned short)44989;
int var_14 = -2065088074;
int zero = 0;
long long int var_15 = 8512137753447269318LL;
short var_16 = (short)-31163;
signed char var_17 = (signed char)76;
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
