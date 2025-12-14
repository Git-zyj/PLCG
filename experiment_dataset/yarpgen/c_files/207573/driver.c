#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -413454161626114560LL;
unsigned long long int var_1 = 14266458783732863550ULL;
int var_2 = -1017429806;
unsigned char var_4 = (unsigned char)114;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)30;
unsigned int var_12 = 3743206135U;
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
