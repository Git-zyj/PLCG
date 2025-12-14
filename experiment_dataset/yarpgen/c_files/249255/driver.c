#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1975738231;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)17162;
unsigned long long int var_7 = 4731511300437719636ULL;
int zero = 0;
long long int var_10 = -2276184709610913095LL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)0;
unsigned short var_13 = (unsigned short)39930;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
