#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)104;
unsigned char var_3 = (unsigned char)229;
short var_9 = (short)20699;
_Bool var_14 = (_Bool)1;
long long int var_15 = 7952522618948581443LL;
short var_18 = (short)25156;
int zero = 0;
long long int var_20 = -6183684327311567689LL;
unsigned char var_21 = (unsigned char)222;
int var_22 = 1751012053;
unsigned long long int var_23 = 1247430577203117710ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
