#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1901724647;
_Bool var_5 = (_Bool)1;
long long int var_16 = 5248476720850801233LL;
unsigned char var_17 = (unsigned char)40;
int zero = 0;
long long int var_20 = -184275644727035135LL;
unsigned char var_21 = (unsigned char)22;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)151;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
