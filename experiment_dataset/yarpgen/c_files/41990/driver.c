#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 3354349952U;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)0;
long long int var_17 = -7016388973531669081LL;
int zero = 0;
unsigned int var_20 = 983773007U;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)98;
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
