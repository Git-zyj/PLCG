#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2238025162U;
long long int var_6 = -8476078040826046496LL;
short var_7 = (short)19020;
long long int var_9 = -7159857716574816272LL;
int zero = 0;
int var_12 = -999939433;
unsigned char var_13 = (unsigned char)110;
unsigned long long int var_14 = 10749372413709045484ULL;
unsigned short var_15 = (unsigned short)24271;
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
