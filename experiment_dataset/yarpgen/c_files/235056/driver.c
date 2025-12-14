#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33190;
unsigned long long int var_2 = 11347574153658038248ULL;
signed char var_4 = (signed char)-22;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 4116728054U;
int zero = 0;
long long int var_11 = 8398787718677415026LL;
unsigned int var_12 = 1418508788U;
unsigned char var_13 = (unsigned char)176;
unsigned char var_14 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
