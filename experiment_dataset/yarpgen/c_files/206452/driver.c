#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)28189;
short var_10 = (short)12780;
unsigned char var_11 = (unsigned char)12;
signed char var_12 = (signed char)-25;
int zero = 0;
long long int var_13 = 6988900984624024873LL;
signed char var_14 = (signed char)113;
signed char var_15 = (signed char)-86;
void init() {
}

void checksum() {
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
