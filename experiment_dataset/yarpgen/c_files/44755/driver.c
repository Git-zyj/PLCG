#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1371727798;
signed char var_5 = (signed char)94;
long long int var_10 = 3939353084384670123LL;
short var_17 = (short)6414;
int zero = 0;
unsigned int var_18 = 1018173653U;
int var_19 = -991922033;
short var_20 = (short)-12948;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
