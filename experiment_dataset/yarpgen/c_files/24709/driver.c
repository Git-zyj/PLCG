#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2188847201U;
unsigned long long int var_5 = 5474625177038439050ULL;
short var_7 = (short)18443;
unsigned char var_14 = (unsigned char)172;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 15145043704310437059ULL;
int var_19 = 1921012914;
int var_20 = -478285422;
int var_21 = -1802441463;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
