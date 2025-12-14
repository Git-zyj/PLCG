#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-24301;
signed char var_2 = (signed char)56;
long long int var_5 = 2727787743389053420LL;
long long int var_10 = 7380721310392648157LL;
int var_11 = 2109704825;
int var_17 = -677212629;
int zero = 0;
int var_19 = -236342063;
int var_20 = 1299909268;
unsigned long long int var_21 = 4379166375206093882ULL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-3600;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
