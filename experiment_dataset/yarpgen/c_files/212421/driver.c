#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 9665345U;
unsigned char var_1 = (unsigned char)203;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 15137448441400301141ULL;
unsigned long long int var_10 = 3382323075081067764ULL;
int zero = 0;
int var_12 = 1917787489;
unsigned int var_13 = 1559700677U;
unsigned long long int var_14 = 10831992861717769700ULL;
unsigned char var_15 = (unsigned char)136;
int var_16 = -1762595984;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
