#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2043576573929842084LL;
signed char var_3 = (signed char)110;
unsigned char var_5 = (unsigned char)61;
short var_6 = (short)7500;
_Bool var_7 = (_Bool)0;
short var_8 = (short)31409;
int var_11 = -1808070493;
long long int var_12 = -6586862637394807347LL;
signed char var_14 = (signed char)-34;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_18 = -1383554398;
short var_19 = (short)11050;
int var_20 = 390298377;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
