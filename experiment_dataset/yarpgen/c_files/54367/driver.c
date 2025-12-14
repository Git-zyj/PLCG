#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1408939760U;
short var_2 = (short)16235;
_Bool var_3 = (_Bool)0;
unsigned short var_8 = (unsigned short)16687;
short var_9 = (short)27750;
int zero = 0;
long long int var_15 = -2235164220827082904LL;
unsigned int var_16 = 3652453863U;
signed char var_17 = (signed char)-61;
int var_18 = -2000694899;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
