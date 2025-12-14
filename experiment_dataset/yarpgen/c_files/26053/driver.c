#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-27372;
unsigned short var_7 = (unsigned short)3120;
_Bool var_10 = (_Bool)0;
short var_11 = (short)29536;
int zero = 0;
signed char var_14 = (signed char)6;
short var_15 = (short)263;
short var_16 = (short)-1633;
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
