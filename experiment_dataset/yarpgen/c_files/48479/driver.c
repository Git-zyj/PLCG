#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-91;
long long int var_8 = -1694627561682535262LL;
unsigned short var_10 = (unsigned short)44208;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)190;
long long int var_15 = 7752374701933730548LL;
void init() {
}

void checksum() {
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
