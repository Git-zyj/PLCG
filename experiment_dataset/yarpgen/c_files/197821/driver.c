#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_5 = (unsigned char)7;
unsigned int var_9 = 395907846U;
unsigned short var_11 = (unsigned short)47894;
unsigned short var_12 = (unsigned short)50569;
int zero = 0;
unsigned char var_15 = (unsigned char)166;
unsigned int var_16 = 2582102347U;
int var_17 = -1554560213;
void init() {
}

void checksum() {
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
