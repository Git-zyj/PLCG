#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1899992306;
unsigned short var_3 = (unsigned short)631;
unsigned char var_9 = (unsigned char)7;
unsigned int var_10 = 3706439553U;
int var_13 = 1973460921;
unsigned short var_14 = (unsigned short)56008;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-32638;
unsigned int var_21 = 1681891349U;
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
