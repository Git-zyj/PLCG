#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1599624532;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)30;
unsigned char var_7 = (unsigned char)241;
long long int var_9 = -5775651929806899030LL;
int zero = 0;
unsigned long long int var_12 = 7306945173362304586ULL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)2;
unsigned int var_15 = 4123052171U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
