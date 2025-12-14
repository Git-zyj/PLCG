#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2141927966;
unsigned short var_5 = (unsigned short)33755;
unsigned long long int var_6 = 5607072881952230126ULL;
int var_8 = 519791309;
unsigned short var_10 = (unsigned short)61921;
int zero = 0;
int var_11 = -1332885922;
unsigned long long int var_12 = 2293880939908693626ULL;
void init() {
}

void checksum() {
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
