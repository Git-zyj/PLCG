#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
signed char var_4 = (signed char)114;
_Bool var_5 = (_Bool)0;
long long int var_6 = -4111493108632305916LL;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1876024654U;
int zero = 0;
long long int var_15 = -2579138454302188058LL;
unsigned int var_16 = 1783057510U;
signed char var_17 = (signed char)-106;
signed char var_18 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
