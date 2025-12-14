#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
int var_4 = 960330742;
signed char var_5 = (signed char)-111;
unsigned char var_7 = (unsigned char)30;
int var_8 = 972242655;
unsigned short var_9 = (unsigned short)42592;
long long int var_10 = -5306354080661306885LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 8969339672114670804ULL;
unsigned long long int var_15 = 9152181623932793366ULL;
unsigned short var_16 = (unsigned short)10573;
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
