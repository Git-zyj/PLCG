#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_4 = -881794482;
int var_5 = 128635122;
int var_8 = 1670899101;
long long int var_9 = -6199773248856673303LL;
unsigned char var_15 = (unsigned char)157;
int zero = 0;
int var_16 = 726482559;
long long int var_17 = 2562350763740996745LL;
signed char var_18 = (signed char)68;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
