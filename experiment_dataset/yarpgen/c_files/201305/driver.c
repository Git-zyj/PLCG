#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12134932909097508629ULL;
unsigned short var_3 = (unsigned short)23427;
signed char var_5 = (signed char)45;
long long int var_10 = -3686804422669455142LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)11094;
unsigned short var_20 = (unsigned short)36001;
void init() {
}

void checksum() {
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
