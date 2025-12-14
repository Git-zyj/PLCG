#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52734;
int var_10 = 1202932834;
long long int var_11 = 763451038670021825LL;
int var_12 = -1160638832;
long long int var_13 = -2101350872041014530LL;
unsigned short var_14 = (unsigned short)21307;
signed char var_16 = (signed char)69;
int zero = 0;
unsigned int var_18 = 2555089584U;
unsigned int var_19 = 767502586U;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)56938;
unsigned long long int var_22 = 9878918512202878085ULL;
void init() {
}

void checksum() {
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
