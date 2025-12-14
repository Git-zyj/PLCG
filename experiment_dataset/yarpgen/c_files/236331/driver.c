#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)133;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 1289772218U;
short var_9 = (short)-32060;
int zero = 0;
unsigned short var_13 = (unsigned short)64617;
unsigned int var_14 = 8011588U;
short var_15 = (short)-7853;
void init() {
}

void checksum() {
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
