#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8116446400935005839LL;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)21;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2646604466U;
unsigned int var_8 = 3241705691U;
unsigned long long int var_10 = 12931767958936435005ULL;
long long int var_12 = -7145774747872659854LL;
unsigned short var_13 = (unsigned short)39659;
int zero = 0;
unsigned long long int var_14 = 10108433347545049703ULL;
int var_15 = -353592985;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
