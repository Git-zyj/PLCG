#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
signed char var_2 = (signed char)33;
unsigned char var_3 = (unsigned char)232;
unsigned char var_4 = (unsigned char)217;
signed char var_7 = (signed char)-49;
int var_10 = -1787964518;
int zero = 0;
signed char var_11 = (signed char)101;
unsigned int var_12 = 1414661991U;
unsigned char var_13 = (unsigned char)215;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
