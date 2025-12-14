#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 194218147866056243ULL;
short var_5 = (short)-13620;
unsigned long long int var_6 = 8926315902350759185ULL;
unsigned int var_7 = 1263775817U;
unsigned short var_11 = (unsigned short)59041;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_19 = -3161324936486292246LL;
unsigned char var_20 = (unsigned char)93;
unsigned long long int var_21 = 15147240253728687739ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
