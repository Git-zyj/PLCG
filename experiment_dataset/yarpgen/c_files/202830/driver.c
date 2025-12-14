#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3487695703U;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)170;
int var_6 = 999093397;
unsigned short var_9 = (unsigned short)880;
int var_10 = -844601254;
signed char var_11 = (signed char)-48;
unsigned int var_13 = 760531727U;
unsigned long long int var_16 = 2550980322679206159ULL;
int zero = 0;
unsigned long long int var_17 = 6833714709123958192ULL;
unsigned char var_18 = (unsigned char)187;
long long int var_19 = -6284258794718523244LL;
unsigned char var_20 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
