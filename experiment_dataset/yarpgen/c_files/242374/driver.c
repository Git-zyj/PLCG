#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5718551274551002627LL;
_Bool var_6 = (_Bool)1;
long long int var_8 = 1151895399516434410LL;
long long int var_13 = -4369740325933020499LL;
int zero = 0;
unsigned short var_14 = (unsigned short)52467;
unsigned char var_15 = (unsigned char)232;
long long int var_16 = 6538439129722607399LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
