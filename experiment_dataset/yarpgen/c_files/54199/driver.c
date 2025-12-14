#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)62;
int var_3 = 2122153708;
unsigned short var_6 = (unsigned short)44566;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)32;
unsigned short var_15 = (unsigned short)51862;
long long int var_16 = 6827935550331657639LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)7892;
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
