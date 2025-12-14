#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1842664359341781542LL;
signed char var_4 = (signed char)-73;
int var_5 = -386740504;
short var_6 = (short)-28063;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)37797;
long long int var_9 = -3592400030195167799LL;
int zero = 0;
unsigned int var_11 = 3079546614U;
unsigned int var_12 = 2429415807U;
signed char var_13 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
