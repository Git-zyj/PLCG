#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)16737;
short var_3 = (short)2338;
short var_8 = (short)-27918;
unsigned short var_11 = (unsigned short)43178;
int zero = 0;
unsigned int var_14 = 4285225108U;
signed char var_15 = (signed char)-94;
void init() {
}

void checksum() {
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
