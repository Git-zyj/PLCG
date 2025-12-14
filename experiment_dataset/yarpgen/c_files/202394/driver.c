#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1774237380;
short var_5 = (short)-3906;
unsigned char var_6 = (unsigned char)103;
unsigned char var_10 = (unsigned char)115;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)42;
signed char var_15 = (signed char)115;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
