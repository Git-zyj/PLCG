#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 221746675;
unsigned int var_3 = 2186051686U;
signed char var_6 = (signed char)65;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)158;
signed char var_11 = (signed char)27;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_16 = 908354586;
unsigned int var_17 = 471840690U;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
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
