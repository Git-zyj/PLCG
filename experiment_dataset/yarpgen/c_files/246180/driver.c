#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)94;
unsigned int var_3 = 386059767U;
unsigned int var_7 = 3779635720U;
int var_10 = -1687976619;
int zero = 0;
int var_11 = -217478431;
int var_12 = -447655654;
long long int var_13 = -5214220769973850201LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
