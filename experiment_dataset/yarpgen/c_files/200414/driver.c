#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)86;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)42;
unsigned long long int var_13 = 9621078084865426039ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)100;
signed char var_18 = (signed char)59;
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
