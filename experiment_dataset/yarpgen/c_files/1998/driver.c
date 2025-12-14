#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 886853586U;
long long int var_3 = 4676576463253514507LL;
unsigned int var_5 = 50331926U;
unsigned int var_7 = 994808319U;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_10 = -824926536;
unsigned long long int var_11 = 6106851307689197873ULL;
int var_12 = 717702588;
unsigned short var_13 = (unsigned short)59919;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
