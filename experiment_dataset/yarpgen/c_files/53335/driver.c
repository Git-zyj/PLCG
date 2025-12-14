#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16413470111627714866ULL;
short var_3 = (short)6619;
long long int var_4 = -3755357943737806952LL;
unsigned char var_5 = (unsigned char)136;
short var_10 = (short)-15166;
int zero = 0;
unsigned long long int var_12 = 2606208104330577789ULL;
int var_13 = -485016543;
unsigned char var_14 = (unsigned char)61;
unsigned char var_15 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
