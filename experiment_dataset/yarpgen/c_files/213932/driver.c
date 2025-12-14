#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30126;
unsigned int var_6 = 2934469589U;
long long int var_14 = -3878281739897440360LL;
_Bool var_15 = (_Bool)1;
unsigned short var_18 = (unsigned short)35645;
int zero = 0;
unsigned int var_20 = 2023767326U;
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
