#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8461889599408283764ULL;
signed char var_6 = (signed char)-86;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)109;
short var_13 = (short)28463;
signed char var_15 = (signed char)-61;
int zero = 0;
unsigned char var_16 = (unsigned char)167;
signed char var_17 = (signed char)48;
unsigned char var_18 = (unsigned char)171;
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
