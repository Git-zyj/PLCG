#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 558194606U;
_Bool var_5 = (_Bool)1;
long long int var_6 = 5236134956632793188LL;
long long int var_13 = -2729485984373890910LL;
int zero = 0;
unsigned short var_20 = (unsigned short)64955;
long long int var_21 = -7052054362443198792LL;
unsigned int var_22 = 2589843963U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
