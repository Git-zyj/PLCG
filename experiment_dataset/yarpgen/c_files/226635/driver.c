#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1211613688593917161LL;
unsigned long long int var_11 = 11352675338723072066ULL;
signed char var_12 = (signed char)101;
long long int var_13 = 415353926517194042LL;
short var_17 = (short)29082;
int zero = 0;
unsigned short var_19 = (unsigned short)35012;
short var_20 = (short)-28445;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
