#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6878276655204206897LL;
_Bool var_5 = (_Bool)1;
unsigned int var_10 = 3075511934U;
unsigned int var_13 = 170673690U;
int zero = 0;
unsigned char var_18 = (unsigned char)24;
unsigned short var_19 = (unsigned short)11947;
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
