#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1388667252;
unsigned char var_10 = (unsigned char)234;
int var_16 = 716950835;
int zero = 0;
unsigned short var_17 = (unsigned short)8886;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3330797332U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
