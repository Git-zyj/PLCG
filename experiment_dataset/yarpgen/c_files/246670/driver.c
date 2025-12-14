#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)134;
int var_3 = 756558612;
long long int var_4 = -4182294447182031755LL;
unsigned char var_9 = (unsigned char)131;
int zero = 0;
long long int var_12 = 7833408457968453715LL;
_Bool var_13 = (_Bool)1;
int var_14 = 1730572941;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
