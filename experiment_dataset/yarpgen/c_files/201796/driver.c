#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1896359827U;
int var_4 = -293234801;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)209;
int zero = 0;
long long int var_11 = -2988270781892488754LL;
unsigned int var_12 = 1401653232U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
