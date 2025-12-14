#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8720464250271791484LL;
short var_2 = (short)17514;
_Bool var_4 = (_Bool)0;
long long int var_8 = -943912718149686425LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)253;
unsigned int var_12 = 3968087644U;
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
