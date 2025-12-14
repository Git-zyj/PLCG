#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41984;
unsigned short var_2 = (unsigned short)32102;
unsigned short var_8 = (unsigned short)21237;
long long int var_9 = -5684338747188052412LL;
unsigned char var_10 = (unsigned char)141;
long long int var_11 = 7034978911202905554LL;
unsigned short var_14 = (unsigned short)16209;
unsigned short var_15 = (unsigned short)39683;
int zero = 0;
unsigned int var_18 = 3097301214U;
unsigned char var_19 = (unsigned char)37;
unsigned short var_20 = (unsigned short)28216;
void init() {
}

void checksum() {
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
