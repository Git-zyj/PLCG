#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2431962815187697268ULL;
signed char var_3 = (signed char)97;
unsigned int var_5 = 27562589U;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)88;
signed char var_12 = (signed char)66;
unsigned char var_13 = (unsigned char)55;
unsigned char var_14 = (unsigned char)153;
int zero = 0;
unsigned long long int var_18 = 2020227394025390007ULL;
unsigned char var_19 = (unsigned char)148;
unsigned char var_20 = (unsigned char)65;
void init() {
}

void checksum() {
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
