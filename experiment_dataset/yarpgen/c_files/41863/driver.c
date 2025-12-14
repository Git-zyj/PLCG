#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2660;
long long int var_4 = -5041521017555621748LL;
long long int var_5 = 7059619908052317484LL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)39473;
unsigned char var_9 = (unsigned char)148;
long long int var_12 = 9137633039214732688LL;
long long int var_13 = -7500796928187409388LL;
int zero = 0;
unsigned char var_15 = (unsigned char)100;
unsigned char var_16 = (unsigned char)190;
int var_17 = 837624894;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
