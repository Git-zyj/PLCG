#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 971726933;
int var_2 = -319866228;
_Bool var_7 = (_Bool)0;
long long int var_8 = -6609980170058252028LL;
unsigned int var_15 = 1183146705U;
int zero = 0;
signed char var_16 = (signed char)61;
long long int var_17 = -5061995697704054935LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
