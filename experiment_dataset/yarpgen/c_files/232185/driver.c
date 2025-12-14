#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12854636298174279210ULL;
unsigned char var_1 = (unsigned char)58;
signed char var_5 = (signed char)64;
unsigned char var_6 = (unsigned char)113;
unsigned char var_11 = (unsigned char)69;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)117;
short var_18 = (short)-1874;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
