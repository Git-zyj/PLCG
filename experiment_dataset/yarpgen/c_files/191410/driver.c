#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)336;
signed char var_12 = (signed char)91;
int var_15 = -987858689;
int zero = 0;
short var_17 = (short)22547;
unsigned short var_18 = (unsigned short)42379;
unsigned short var_19 = (unsigned short)63098;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
