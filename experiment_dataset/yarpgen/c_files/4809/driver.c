#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
unsigned char var_4 = (unsigned char)113;
unsigned char var_7 = (unsigned char)243;
signed char var_14 = (signed char)2;
int zero = 0;
long long int var_15 = -17833113212633760LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -4333715325009073362LL;
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
