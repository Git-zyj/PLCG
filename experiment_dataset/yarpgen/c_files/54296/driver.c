#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)13387;
short var_2 = (short)-15978;
signed char var_3 = (signed char)6;
unsigned long long int var_4 = 15447507569367266103ULL;
long long int var_5 = 2703435930103733002LL;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)46;
short var_13 = (short)-29333;
unsigned int var_14 = 912146962U;
long long int var_15 = -1063212995356787129LL;
long long int var_16 = 1396711053731710295LL;
unsigned short var_17 = (unsigned short)51073;
int zero = 0;
unsigned long long int var_19 = 14005616968937954739ULL;
unsigned short var_20 = (unsigned short)8959;
long long int var_21 = 3480650814973697014LL;
_Bool var_22 = (_Bool)0;
long long int var_23 = -6756916805428181956LL;
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
