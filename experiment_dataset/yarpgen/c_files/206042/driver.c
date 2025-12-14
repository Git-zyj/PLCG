#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3139810637470912107ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 14077783325351054304ULL;
unsigned int var_7 = 1466941576U;
long long int var_8 = -7726471567183662639LL;
unsigned char var_9 = (unsigned char)49;
int zero = 0;
unsigned char var_10 = (unsigned char)197;
unsigned int var_11 = 784450457U;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
