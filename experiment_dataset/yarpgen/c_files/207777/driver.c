#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)181;
short var_4 = (short)19824;
signed char var_8 = (signed char)-5;
long long int var_11 = -2045302533828143607LL;
unsigned long long int var_14 = 8860109938135071659ULL;
unsigned int var_17 = 3418217280U;
int zero = 0;
unsigned short var_19 = (unsigned short)53651;
unsigned char var_20 = (unsigned char)187;
int var_21 = 1335425639;
unsigned char var_22 = (unsigned char)233;
unsigned char var_23 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
