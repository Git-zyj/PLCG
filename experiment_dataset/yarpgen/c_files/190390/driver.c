#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4287369557848239485LL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 2297603732U;
int var_12 = 478568276;
long long int var_13 = 2803286309291856225LL;
unsigned char var_14 = (unsigned char)100;
unsigned int var_17 = 683394976U;
int zero = 0;
unsigned int var_20 = 3598154394U;
_Bool var_21 = (_Bool)0;
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
