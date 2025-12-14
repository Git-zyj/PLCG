#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-89;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 2820846487097112157ULL;
_Bool var_9 = (_Bool)1;
int var_10 = -1849705223;
unsigned short var_13 = (unsigned short)62014;
unsigned short var_17 = (unsigned short)16514;
int zero = 0;
unsigned int var_19 = 2662775556U;
int var_20 = 580843997;
unsigned long long int var_21 = 13055963359044153657ULL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
