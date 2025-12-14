#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)129;
short var_3 = (short)6715;
int var_5 = 1159908282;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_14 = (short)-31917;
unsigned char var_15 = (unsigned char)33;
unsigned short var_16 = (unsigned short)58060;
short var_17 = (short)1649;
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
