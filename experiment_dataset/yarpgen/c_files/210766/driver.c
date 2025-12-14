#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)171;
int var_5 = 920144920;
unsigned short var_9 = (unsigned short)22144;
unsigned long long int var_10 = 14423410304981258193ULL;
int var_11 = -361560056;
unsigned int var_12 = 1465903201U;
int zero = 0;
int var_14 = 1764611522;
unsigned char var_15 = (unsigned char)197;
long long int var_16 = 7423679020806911875LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
