#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36318;
unsigned long long int var_2 = 10160694675390252438ULL;
unsigned char var_3 = (unsigned char)165;
unsigned long long int var_10 = 14497719285846864287ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-100;
signed char var_16 = (signed char)-71;
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
