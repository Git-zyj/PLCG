#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11926799867973366638ULL;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
int var_11 = -1779580973;
_Bool var_12 = (_Bool)1;
unsigned char var_16 = (unsigned char)232;
unsigned short var_17 = (unsigned short)60598;
int zero = 0;
unsigned int var_20 = 426676007U;
unsigned int var_21 = 3963184014U;
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
