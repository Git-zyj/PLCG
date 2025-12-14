#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1412495838U;
unsigned int var_7 = 2834422482U;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 845928019U;
unsigned int var_11 = 612911441U;
int zero = 0;
unsigned char var_12 = (unsigned char)15;
short var_13 = (short)-21633;
unsigned short var_14 = (unsigned short)22972;
int var_15 = 1501280259;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
