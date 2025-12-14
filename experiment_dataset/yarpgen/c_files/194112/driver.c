#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)743;
long long int var_8 = 16080104089672692LL;
int var_9 = 116975294;
unsigned short var_11 = (unsigned short)12051;
short var_15 = (short)16316;
unsigned long long int var_16 = 2526313424098243348ULL;
signed char var_17 = (signed char)56;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1439673240U;
long long int var_22 = 1731083112681817954LL;
void init() {
}

void checksum() {
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
