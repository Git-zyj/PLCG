#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7478;
unsigned int var_5 = 3298744855U;
unsigned char var_9 = (unsigned char)212;
unsigned short var_10 = (unsigned short)1357;
unsigned short var_11 = (unsigned short)43629;
unsigned short var_12 = (unsigned short)3968;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 16467930582988175532ULL;
unsigned int var_15 = 304557287U;
void init() {
}

void checksum() {
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
