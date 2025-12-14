#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 43557258U;
signed char var_2 = (signed char)-17;
unsigned long long int var_10 = 1935810379914645866ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)240;
signed char var_13 = (signed char)-4;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)61;
_Bool var_16 = (_Bool)1;
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
