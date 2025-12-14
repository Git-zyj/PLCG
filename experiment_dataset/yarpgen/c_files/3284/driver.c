#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7220306158928208515LL;
unsigned long long int var_2 = 16611890447476093723ULL;
long long int var_4 = 788571322661675903LL;
unsigned int var_6 = 3758260318U;
unsigned short var_9 = (unsigned short)52901;
unsigned long long int var_10 = 497091978698363133ULL;
int zero = 0;
short var_12 = (short)-8137;
unsigned short var_13 = (unsigned short)52874;
long long int var_14 = -7645867897297591615LL;
unsigned short var_15 = (unsigned short)53582;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
