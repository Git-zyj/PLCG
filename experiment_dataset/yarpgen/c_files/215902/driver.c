#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)45;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)28987;
int var_8 = -549438331;
int var_12 = -748607703;
int zero = 0;
unsigned short var_16 = (unsigned short)2600;
_Bool var_17 = (_Bool)0;
int var_18 = 1898853911;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
