#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
long long int var_1 = -2407301146531704441LL;
signed char var_3 = (signed char)73;
long long int var_4 = 5204146515034691070LL;
short var_5 = (short)10053;
unsigned long long int var_6 = 269591131960800849ULL;
short var_8 = (short)-12428;
int var_9 = 1763971522;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 218644046U;
long long int var_12 = 3254998620310021868LL;
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
