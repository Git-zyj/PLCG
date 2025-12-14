#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8242;
unsigned long long int var_5 = 11525628205632307670ULL;
long long int var_9 = 554844133679003590LL;
unsigned long long int var_10 = 5566300283356042507ULL;
unsigned long long int var_11 = 7913293708903246703ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_16 = (unsigned char)27;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)17782;
unsigned int var_19 = 1165297136U;
unsigned long long int var_20 = 9704559925271945810ULL;
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
