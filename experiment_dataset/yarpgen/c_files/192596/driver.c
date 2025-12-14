#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)115;
long long int var_4 = -2776519701893255185LL;
unsigned long long int var_5 = 16934245951266418660ULL;
unsigned long long int var_6 = 9203893969620417990ULL;
unsigned char var_11 = (unsigned char)74;
unsigned int var_12 = 2997596294U;
short var_15 = (short)16323;
unsigned short var_19 = (unsigned short)36692;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1890933921U;
long long int var_22 = 8750026055489970968LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
