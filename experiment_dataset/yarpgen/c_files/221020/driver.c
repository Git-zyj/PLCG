#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 12293078715853390268ULL;
int var_13 = 1960953482;
signed char var_14 = (signed char)99;
unsigned int var_16 = 2806352797U;
unsigned char var_17 = (unsigned char)105;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 399563228;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
