#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 17647559080898295424ULL;
unsigned long long int var_10 = 15534754807510066954ULL;
signed char var_11 = (signed char)-115;
unsigned int var_12 = 1017434103U;
int zero = 0;
short var_13 = (short)7701;
unsigned char var_14 = (unsigned char)45;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
