#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)37;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)6;
unsigned char var_9 = (unsigned char)5;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)17091;
signed char var_12 = (signed char)-22;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 17182499297009480670ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
