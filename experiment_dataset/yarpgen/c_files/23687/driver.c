#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2079096237U;
_Bool var_13 = (_Bool)1;
long long int var_16 = 7582923492298911349LL;
int zero = 0;
unsigned short var_18 = (unsigned short)56466;
_Bool var_19 = (_Bool)0;
short var_20 = (short)4614;
void init() {
}

void checksum() {
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
