#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10249774550063033381ULL;
unsigned char var_2 = (unsigned char)67;
short var_3 = (short)-728;
unsigned long long int var_6 = 8290468365857827338ULL;
long long int var_8 = -7191252350735741654LL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)48;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_13 = 35280260499302737LL;
long long int var_14 = -3552313766248473073LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
