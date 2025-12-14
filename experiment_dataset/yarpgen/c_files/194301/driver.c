#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 1361779746417995653ULL;
_Bool var_12 = (_Bool)0;
int var_13 = -1193717506;
int zero = 0;
unsigned short var_16 = (unsigned short)19091;
unsigned char var_17 = (unsigned char)2;
void init() {
}

void checksum() {
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
