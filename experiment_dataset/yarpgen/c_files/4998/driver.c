#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1087781473412473503ULL;
unsigned char var_12 = (unsigned char)202;
long long int var_14 = -4930110446578652318LL;
int zero = 0;
unsigned long long int var_20 = 13848967573103480078ULL;
unsigned char var_21 = (unsigned char)235;
long long int var_22 = 3822397484148693763LL;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
