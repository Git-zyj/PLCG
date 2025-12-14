#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_6 = 9162532046576273186LL;
long long int var_7 = 4080023599018085068LL;
unsigned long long int var_8 = 12028503691977423087ULL;
int var_9 = 1106144725;
unsigned short var_10 = (unsigned short)49236;
unsigned int var_11 = 927610652U;
int var_12 = -1683970550;
int zero = 0;
unsigned long long int var_13 = 10268110404320198666ULL;
unsigned char var_14 = (unsigned char)108;
unsigned long long int var_15 = 8183262216169491885ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
