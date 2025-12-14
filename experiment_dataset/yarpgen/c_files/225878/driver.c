#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)189;
unsigned char var_5 = (unsigned char)143;
unsigned long long int var_6 = 259373259064079771ULL;
unsigned short var_8 = (unsigned short)49375;
int var_18 = 107121404;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2993198089U;
unsigned int var_22 = 571763665U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
