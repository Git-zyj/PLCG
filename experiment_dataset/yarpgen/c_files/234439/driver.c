#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)35197;
short var_12 = (short)-6574;
unsigned int var_14 = 2377370632U;
unsigned int var_17 = 3097602146U;
int zero = 0;
long long int var_18 = 4710916065817365582LL;
int var_19 = -432615283;
unsigned short var_20 = (unsigned short)11051;
unsigned int var_21 = 1117694477U;
unsigned short var_22 = (unsigned short)24211;
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
