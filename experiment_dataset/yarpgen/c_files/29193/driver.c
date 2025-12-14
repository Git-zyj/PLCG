#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1851484455;
unsigned char var_2 = (unsigned char)29;
long long int var_4 = -2155795006837361073LL;
int var_6 = 493806356;
unsigned short var_8 = (unsigned short)29953;
unsigned char var_11 = (unsigned char)73;
unsigned short var_12 = (unsigned short)60065;
unsigned long long int var_13 = 2349304759507185379ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)12410;
unsigned short var_16 = (unsigned short)12241;
void init() {
}

void checksum() {
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
