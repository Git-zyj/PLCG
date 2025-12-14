#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-37;
unsigned long long int var_5 = 15452820224249803866ULL;
unsigned char var_7 = (unsigned char)160;
unsigned long long int var_8 = 6712447607874215906ULL;
long long int var_13 = 4123494910808884368LL;
unsigned int var_15 = 3372777341U;
int zero = 0;
unsigned int var_17 = 1934611594U;
unsigned short var_18 = (unsigned short)29872;
long long int var_19 = 306268535731857342LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
