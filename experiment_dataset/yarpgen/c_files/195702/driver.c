#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)7459;
long long int var_10 = 5724463595989954245LL;
unsigned short var_16 = (unsigned short)16012;
int zero = 0;
long long int var_19 = 3272235340123064223LL;
unsigned short var_20 = (unsigned short)6604;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
