#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13269;
int var_1 = 716690005;
unsigned int var_3 = 983822376U;
unsigned char var_7 = (unsigned char)201;
unsigned long long int var_8 = 2264210418953146439ULL;
short var_9 = (short)-25029;
signed char var_10 = (signed char)2;
int zero = 0;
unsigned int var_14 = 3542006900U;
short var_15 = (short)21559;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
