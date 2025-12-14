#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8485691107566074245LL;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)3428;
int zero = 0;
unsigned short var_11 = (unsigned short)1611;
unsigned int var_12 = 639230430U;
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
