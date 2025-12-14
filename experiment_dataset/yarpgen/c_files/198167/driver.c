#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4680246304468646772LL;
unsigned short var_1 = (unsigned short)16933;
long long int var_2 = 6420092284401702256LL;
short var_3 = (short)24305;
unsigned char var_4 = (unsigned char)32;
unsigned int var_6 = 2168091666U;
unsigned short var_7 = (unsigned short)48633;
unsigned char var_9 = (unsigned char)135;
int zero = 0;
short var_10 = (short)-7305;
unsigned int var_11 = 1962721977U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
