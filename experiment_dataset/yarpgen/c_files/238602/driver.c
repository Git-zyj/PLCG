#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-14;
long long int var_3 = -7842489574846674506LL;
long long int var_5 = 7370401521105754267LL;
long long int var_6 = 6796637777137721907LL;
unsigned short var_8 = (unsigned short)5654;
long long int var_11 = 5763092581369987809LL;
short var_12 = (short)-21814;
unsigned short var_16 = (unsigned short)3573;
short var_17 = (short)9593;
int zero = 0;
unsigned short var_18 = (unsigned short)53702;
short var_19 = (short)2171;
int var_20 = 1604387057;
long long int var_21 = 4092409557995306318LL;
unsigned short var_22 = (unsigned short)56792;
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
