#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)99;
short var_3 = (short)-365;
unsigned int var_8 = 2989010420U;
long long int var_9 = 608888276750900514LL;
unsigned char var_10 = (unsigned char)51;
int zero = 0;
short var_13 = (short)-20766;
_Bool var_14 = (_Bool)1;
long long int var_15 = -5846345626093900121LL;
unsigned int var_16 = 4281253525U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
