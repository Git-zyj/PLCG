#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)48763;
unsigned short var_4 = (unsigned short)42859;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_11 = -4230755177908313703LL;
int zero = 0;
int var_13 = -936775080;
_Bool var_14 = (_Bool)1;
int var_15 = -257387666;
unsigned short var_16 = (unsigned short)46390;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
