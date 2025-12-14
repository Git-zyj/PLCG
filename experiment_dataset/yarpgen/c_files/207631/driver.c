#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 2929262903012673681ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)46279;
short var_17 = (short)-8175;
unsigned short var_18 = (unsigned short)45766;
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
