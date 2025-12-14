#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_6 = (signed char)-27;
unsigned char var_7 = (unsigned char)84;
unsigned long long int var_11 = 13562926037236357713ULL;
short var_14 = (short)28260;
unsigned int var_15 = 474842995U;
long long int var_19 = 33329377970127537LL;
int zero = 0;
long long int var_20 = 8189509981465395436LL;
unsigned short var_21 = (unsigned short)8129;
long long int var_22 = 2214739978781788390LL;
unsigned short var_23 = (unsigned short)48430;
void init() {
}

void checksum() {
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
