#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 614126849;
short var_1 = (short)-373;
unsigned int var_2 = 2133880826U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)42844;
long long int var_7 = -7441017953241695507LL;
int var_10 = -141323445;
long long int var_13 = 8642328082064579286LL;
int zero = 0;
unsigned int var_14 = 2573728338U;
long long int var_15 = 2054156841908206319LL;
short var_16 = (short)-20104;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
