#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 304112730U;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)51349;
_Bool var_11 = (_Bool)1;
long long int var_12 = 7641838020683217175LL;
int zero = 0;
long long int var_13 = 9014973125725806438LL;
long long int var_14 = -2759419616509662339LL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
