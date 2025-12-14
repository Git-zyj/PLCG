#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)159;
unsigned long long int var_5 = 13302246265729555814ULL;
short var_6 = (short)11597;
unsigned short var_7 = (unsigned short)64409;
long long int var_8 = 120970534897021699LL;
unsigned char var_9 = (unsigned char)152;
unsigned short var_11 = (unsigned short)50897;
int zero = 0;
unsigned short var_12 = (unsigned short)59428;
unsigned char var_13 = (unsigned char)110;
unsigned int var_14 = 4097869979U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
