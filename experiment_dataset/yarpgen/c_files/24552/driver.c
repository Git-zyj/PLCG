#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 692463760462861839ULL;
unsigned short var_9 = (unsigned short)23068;
unsigned short var_13 = (unsigned short)33344;
unsigned long long int var_15 = 180497757520473088ULL;
unsigned short var_19 = (unsigned short)15029;
int zero = 0;
unsigned long long int var_20 = 4846705875415138383ULL;
short var_21 = (short)-2704;
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
