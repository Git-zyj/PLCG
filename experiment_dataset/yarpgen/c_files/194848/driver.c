#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)243;
long long int var_2 = -5155530274410511129LL;
int var_5 = 1412724821;
_Bool var_7 = (_Bool)1;
int zero = 0;
short var_19 = (short)-31869;
unsigned short var_20 = (unsigned short)11347;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
