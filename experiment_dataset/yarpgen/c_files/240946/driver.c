#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_4 = 2632869102U;
_Bool var_5 = (_Bool)0;
unsigned int var_10 = 3050612024U;
long long int var_16 = 8726113855627413774LL;
int zero = 0;
signed char var_18 = (signed char)14;
unsigned char var_19 = (unsigned char)115;
unsigned short var_20 = (unsigned short)14670;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
