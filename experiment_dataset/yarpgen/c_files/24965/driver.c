#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33956;
long long int var_6 = -5729711129365823545LL;
long long int var_7 = -7781586258880411426LL;
long long int var_8 = -1782707862952178658LL;
int zero = 0;
unsigned char var_10 = (unsigned char)231;
unsigned int var_11 = 4092409622U;
unsigned int var_12 = 991093268U;
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
