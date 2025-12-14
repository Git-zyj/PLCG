#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5205572039766981603LL;
short var_11 = (short)-2303;
signed char var_15 = (signed char)120;
int zero = 0;
signed char var_16 = (signed char)79;
unsigned short var_17 = (unsigned short)2032;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
