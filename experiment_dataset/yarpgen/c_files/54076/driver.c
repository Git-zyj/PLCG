#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14518;
long long int var_1 = -6182797201785195414LL;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)208;
unsigned char var_6 = (unsigned char)16;
unsigned char var_10 = (unsigned char)176;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)113;
_Bool var_15 = (_Bool)0;
long long int var_16 = 2930436406612160188LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
