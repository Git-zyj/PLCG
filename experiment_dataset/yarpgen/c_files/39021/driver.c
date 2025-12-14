#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)38097;
unsigned int var_12 = 417256672U;
unsigned short var_14 = (unsigned short)46747;
int var_15 = 1512399531;
long long int var_18 = 9168505588877157682LL;
int zero = 0;
short var_20 = (short)4651;
unsigned int var_21 = 2698629147U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
