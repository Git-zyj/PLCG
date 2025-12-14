#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_6 = 3111876146U;
unsigned long long int var_7 = 13404041094458480449ULL;
_Bool var_11 = (_Bool)0;
long long int var_12 = 8206266179162511333LL;
signed char var_16 = (signed char)115;
int zero = 0;
unsigned long long int var_17 = 15894758082895493443ULL;
unsigned long long int var_18 = 16486527738803950452ULL;
unsigned int var_19 = 3453805224U;
short var_20 = (short)-24078;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
