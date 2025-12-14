#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53238;
unsigned short var_1 = (unsigned short)13855;
signed char var_2 = (signed char)-33;
long long int var_5 = -1316744302033369557LL;
int var_10 = 1349680428;
int zero = 0;
unsigned char var_12 = (unsigned char)172;
unsigned char var_13 = (unsigned char)127;
unsigned int var_14 = 3332247795U;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)891;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
