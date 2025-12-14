#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -751976630;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_15 = 4255849789155118720LL;
unsigned char var_16 = (unsigned char)26;
unsigned char var_17 = (unsigned char)177;
unsigned long long int var_18 = 10327745195054030474ULL;
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
