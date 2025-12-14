#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8923831159402308818LL;
long long int var_4 = 8500254549160472361LL;
short var_5 = (short)-13511;
unsigned char var_6 = (unsigned char)78;
short var_8 = (short)21153;
int zero = 0;
signed char var_10 = (signed char)122;
int var_11 = 1711150944;
short var_12 = (short)1688;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
