#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
unsigned long long int var_1 = 14875110251969112891ULL;
unsigned char var_2 = (unsigned char)47;
unsigned int var_3 = 2699403377U;
int var_5 = 187002032;
unsigned long long int var_8 = 8525442283353768797ULL;
unsigned short var_11 = (unsigned short)48458;
unsigned short var_16 = (unsigned short)22741;
int zero = 0;
unsigned long long int var_17 = 11530380916667492189ULL;
long long int var_18 = 8983298086681682496LL;
int var_19 = 465279846;
unsigned long long int var_20 = 2116429231823365527ULL;
unsigned long long int var_21 = 15738646614415765355ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
