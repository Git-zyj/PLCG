#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)61917;
signed char var_6 = (signed char)119;
int zero = 0;
unsigned short var_13 = (unsigned short)1184;
short var_14 = (short)-21761;
unsigned int var_15 = 763370772U;
long long int var_16 = 7494568204199562380LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
