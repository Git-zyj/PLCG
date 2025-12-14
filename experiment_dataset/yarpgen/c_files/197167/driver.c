#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14827226318692400011ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)178;
signed char var_7 = (signed char)100;
signed char var_8 = (signed char)98;
unsigned short var_11 = (unsigned short)33092;
long long int var_13 = -5653239588398732091LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)45091;
int var_16 = 1457319392;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
