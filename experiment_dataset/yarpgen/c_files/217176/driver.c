#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3362309432U;
int var_2 = 1789506807;
unsigned char var_3 = (unsigned char)248;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 16975153900393768047ULL;
unsigned long long int var_13 = 15875837597514320680ULL;
short var_14 = (short)-16741;
int var_15 = 1971025205;
unsigned char var_16 = (unsigned char)29;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
