#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)218;
unsigned long long int var_6 = 10235229129589550981ULL;
unsigned long long int var_8 = 5253142395670502688ULL;
unsigned int var_11 = 1686165931U;
unsigned char var_12 = (unsigned char)213;
unsigned long long int var_13 = 8047038796745905958ULL;
int var_14 = -121067815;
int zero = 0;
unsigned long long int var_17 = 4698375547609151494ULL;
_Bool var_18 = (_Bool)1;
long long int var_19 = -3122060090687401659LL;
signed char var_20 = (signed char)-123;
unsigned int var_21 = 3135658062U;
int var_22 = -635264310;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
