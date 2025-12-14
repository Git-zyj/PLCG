#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = -1846518072;
unsigned int var_6 = 1449797073U;
short var_13 = (short)26781;
int zero = 0;
unsigned int var_16 = 3416592885U;
long long int var_17 = 5673707283794920378LL;
unsigned char var_18 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
