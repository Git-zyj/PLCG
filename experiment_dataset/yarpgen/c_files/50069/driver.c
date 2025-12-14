#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 224811211U;
long long int var_6 = 5788896737531998928LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)52;
unsigned char var_15 = (unsigned char)165;
int var_16 = 874223532;
unsigned int var_17 = 1020047882U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
