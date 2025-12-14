#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6815;
unsigned char var_8 = (unsigned char)247;
signed char var_10 = (signed char)92;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-24877;
unsigned int var_14 = 572933971U;
unsigned long long int var_15 = 7504208495677167299ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)184;
unsigned long long int var_18 = 15265710222999433756ULL;
long long int var_19 = -8351097681259192400LL;
unsigned int var_20 = 3294817997U;
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
