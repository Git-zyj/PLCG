#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20060;
long long int var_3 = -979488788040753768LL;
signed char var_10 = (signed char)106;
int var_12 = -1562157209;
unsigned long long int var_14 = 18285481843888538336ULL;
unsigned long long int var_15 = 6057839177917415993ULL;
signed char var_16 = (signed char)38;
unsigned char var_17 = (unsigned char)116;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 15935956965574822847ULL;
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
