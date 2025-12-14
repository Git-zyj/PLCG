#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27508;
short var_2 = (short)-21273;
unsigned short var_3 = (unsigned short)37491;
unsigned short var_4 = (unsigned short)18668;
signed char var_5 = (signed char)-62;
unsigned int var_7 = 3813131292U;
short var_10 = (short)6639;
unsigned short var_14 = (unsigned short)47137;
unsigned short var_15 = (unsigned short)37148;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)10625;
unsigned int var_20 = 1841574560U;
long long int var_21 = -259130393459115469LL;
long long int var_22 = 8763796231966169004LL;
void init() {
}

void checksum() {
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
