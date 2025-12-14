#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4465;
unsigned short var_1 = (unsigned short)2839;
long long int var_5 = -4572743852419133073LL;
unsigned short var_8 = (unsigned short)46661;
unsigned short var_9 = (unsigned short)7089;
int zero = 0;
long long int var_10 = -2223398935073323849LL;
int var_11 = 1450722080;
signed char var_12 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
