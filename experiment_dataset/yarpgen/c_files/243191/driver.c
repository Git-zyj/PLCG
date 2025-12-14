#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31798;
unsigned short var_3 = (unsigned short)22046;
unsigned long long int var_4 = 8973141121964193204ULL;
unsigned short var_6 = (unsigned short)21439;
unsigned short var_7 = (unsigned short)38559;
signed char var_8 = (signed char)-51;
unsigned long long int var_9 = 13442353109800678813ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 979995000U;
unsigned long long int var_13 = 15232249279253255563ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
