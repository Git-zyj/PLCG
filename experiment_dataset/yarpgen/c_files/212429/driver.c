#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)233;
short var_2 = (short)-14466;
long long int var_3 = 1976727973990579395LL;
short var_5 = (short)23858;
signed char var_10 = (signed char)93;
int zero = 0;
long long int var_13 = -8083382022403902273LL;
unsigned char var_14 = (unsigned char)164;
unsigned char var_15 = (unsigned char)42;
int var_16 = -1027704724;
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
