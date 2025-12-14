#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 411299971;
signed char var_6 = (signed char)75;
signed char var_11 = (signed char)102;
signed char var_13 = (signed char)75;
unsigned long long int var_15 = 2882120593917954299ULL;
unsigned char var_17 = (unsigned char)78;
int zero = 0;
signed char var_18 = (signed char)16;
short var_19 = (short)26887;
void init() {
}

void checksum() {
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
