#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)10512;
unsigned int var_10 = 792998214U;
int var_11 = 1445093868;
int zero = 0;
long long int var_12 = -1019196003901037023LL;
unsigned int var_13 = 2224277002U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
