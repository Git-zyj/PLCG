#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)57;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-26654;
int var_10 = 1994091998;
unsigned char var_11 = (unsigned char)30;
int zero = 0;
short var_13 = (short)19526;
short var_14 = (short)15406;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
