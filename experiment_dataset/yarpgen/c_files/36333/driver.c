#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3136041320U;
long long int var_5 = 8856539626883043954LL;
_Bool var_7 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int var_16 = 1249397977;
int zero = 0;
unsigned char var_20 = (unsigned char)135;
long long int var_21 = 1334610752407449815LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
