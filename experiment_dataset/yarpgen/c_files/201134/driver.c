#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)29;
int var_6 = -1720268651;
_Bool var_10 = (_Bool)1;
long long int var_11 = -2235827679055612691LL;
int zero = 0;
short var_15 = (short)-23383;
unsigned char var_16 = (unsigned char)207;
unsigned short var_17 = (unsigned short)6115;
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
