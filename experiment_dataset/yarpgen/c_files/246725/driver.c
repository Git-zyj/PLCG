#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -180645966204108342LL;
unsigned short var_6 = (unsigned short)17894;
long long int var_10 = -64811384901062410LL;
int zero = 0;
unsigned short var_15 = (unsigned short)11474;
long long int var_16 = 1529328937125397211LL;
unsigned char var_17 = (unsigned char)136;
unsigned short var_18 = (unsigned short)2435;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
