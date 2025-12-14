#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = -8103517870976730775LL;
unsigned char var_4 = (unsigned char)141;
unsigned char var_10 = (unsigned char)140;
unsigned int var_13 = 42891446U;
long long int var_14 = -1757888372711293699LL;
signed char var_15 = (signed char)0;
int zero = 0;
long long int var_16 = -5897872423754380227LL;
short var_17 = (short)197;
unsigned char var_18 = (unsigned char)95;
void init() {
}

void checksum() {
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
