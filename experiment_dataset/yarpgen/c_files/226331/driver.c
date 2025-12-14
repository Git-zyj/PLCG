#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2074569953;
unsigned short var_7 = (unsigned short)17097;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)84;
long long int var_12 = 2347071087399610015LL;
int zero = 0;
unsigned char var_13 = (unsigned char)249;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)2704;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
