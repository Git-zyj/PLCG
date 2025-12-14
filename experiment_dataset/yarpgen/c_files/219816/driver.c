#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 562037627U;
unsigned char var_3 = (unsigned char)90;
unsigned long long int var_7 = 17178866997262537132ULL;
unsigned short var_9 = (unsigned short)54018;
unsigned long long int var_10 = 17342947306683316716ULL;
signed char var_13 = (signed char)105;
unsigned char var_14 = (unsigned char)135;
short var_15 = (short)7403;
int zero = 0;
unsigned long long int var_16 = 17692620978874265869ULL;
int var_17 = -1758286689;
unsigned char var_18 = (unsigned char)53;
long long int var_19 = 9093615635039518983LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
