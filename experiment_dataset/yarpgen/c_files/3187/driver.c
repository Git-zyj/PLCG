#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_4 = (short)-32503;
unsigned int var_5 = 3275069347U;
unsigned char var_10 = (unsigned char)249;
int zero = 0;
unsigned char var_18 = (unsigned char)20;
short var_19 = (short)29635;
unsigned char var_20 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
