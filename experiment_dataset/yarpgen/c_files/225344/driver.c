#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2723412316820635080ULL;
unsigned int var_4 = 890633164U;
int var_6 = 472847968;
long long int var_8 = 7626513046025290769LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_17 = 13299963395589470075ULL;
short var_18 = (short)-144;
int zero = 0;
unsigned int var_20 = 185268054U;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)57;
void init() {
}

void checksum() {
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
