#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)50;
int var_6 = 130093447;
short var_8 = (short)-25368;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-8765;
signed char var_11 = (signed char)113;
int zero = 0;
int var_13 = -226048442;
unsigned char var_14 = (unsigned char)112;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
