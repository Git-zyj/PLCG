#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3069740747472175990LL;
signed char var_2 = (signed char)-31;
short var_3 = (short)-28925;
short var_4 = (short)23143;
unsigned short var_6 = (unsigned short)110;
unsigned short var_7 = (unsigned short)27194;
_Bool var_8 = (_Bool)1;
long long int var_9 = -1214379095205964301LL;
int zero = 0;
unsigned short var_10 = (unsigned short)45920;
unsigned short var_11 = (unsigned short)8692;
long long int var_12 = -8034252788692028198LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
