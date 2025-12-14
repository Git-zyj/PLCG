#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)2;
unsigned int var_6 = 1384880073U;
long long int var_7 = -8175389721632482367LL;
unsigned int var_8 = 753689565U;
unsigned char var_10 = (unsigned char)155;
int zero = 0;
signed char var_16 = (signed char)3;
_Bool var_17 = (_Bool)0;
int var_18 = 1415450341;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2229078298U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
