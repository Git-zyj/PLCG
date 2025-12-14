#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5469660775973060966LL;
unsigned long long int var_1 = 4811057368583624423ULL;
short var_2 = (short)-24446;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)14;
signed char var_7 = (signed char)-35;
short var_12 = (short)-30378;
int zero = 0;
unsigned long long int var_14 = 9160893001792788996ULL;
signed char var_15 = (signed char)54;
unsigned short var_16 = (unsigned short)18078;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
