#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 56011521;
long long int var_1 = -2717848396270815727LL;
short var_2 = (short)26577;
int var_3 = 2108026113;
unsigned short var_4 = (unsigned short)6086;
long long int var_5 = -3693154058130826451LL;
int var_6 = 1589024327;
short var_7 = (short)-528;
unsigned short var_8 = (unsigned short)20528;
signed char var_9 = (signed char)-52;
int zero = 0;
short var_10 = (short)6605;
int var_11 = 921341534;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
