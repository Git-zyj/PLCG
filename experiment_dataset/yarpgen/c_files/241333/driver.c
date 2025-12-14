#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2116337899850564200LL;
unsigned int var_1 = 1134993720U;
long long int var_3 = -6008394574538106567LL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)122;
unsigned short var_7 = (unsigned short)61666;
short var_8 = (short)20288;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 2348985376U;
long long int var_20 = 291944118473276653LL;
unsigned short var_21 = (unsigned short)55799;
void init() {
}

void checksum() {
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
