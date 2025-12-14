#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)20049;
unsigned int var_4 = 2372405928U;
short var_5 = (short)-715;
signed char var_6 = (signed char)-110;
int var_8 = 368125490;
_Bool var_9 = (_Bool)1;
long long int var_10 = 8510892887582848917LL;
int zero = 0;
signed char var_11 = (signed char)-13;
int var_12 = -1163413118;
unsigned int var_13 = 624236581U;
unsigned long long int var_14 = 1392868944368583529ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
