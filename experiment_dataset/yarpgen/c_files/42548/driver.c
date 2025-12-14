#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6450218582353164428ULL;
int var_6 = 1466279162;
unsigned short var_7 = (unsigned short)5390;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)10091;
unsigned short var_13 = (unsigned short)43822;
unsigned long long int var_14 = 1965687196512424979ULL;
void init() {
}

void checksum() {
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
