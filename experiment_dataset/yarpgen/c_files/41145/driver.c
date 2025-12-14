#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)226;
unsigned long long int var_3 = 16659111068244991323ULL;
unsigned char var_4 = (unsigned char)39;
unsigned char var_5 = (unsigned char)122;
unsigned char var_6 = (unsigned char)102;
unsigned char var_9 = (unsigned char)199;
unsigned int var_15 = 3537316395U;
unsigned long long int var_17 = 741657614829000390ULL;
unsigned long long int var_18 = 13518306568079354204ULL;
int zero = 0;
unsigned long long int var_20 = 3160764685060883936ULL;
unsigned char var_21 = (unsigned char)0;
unsigned int var_22 = 80341867U;
unsigned int var_23 = 3544989302U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
