#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1437122233U;
short var_5 = (short)15041;
int var_6 = -1765213731;
unsigned long long int var_8 = 16924735625846386572ULL;
signed char var_9 = (signed char)-86;
int var_12 = 1321260583;
unsigned int var_13 = 1891410569U;
_Bool var_15 = (_Bool)0;
int var_16 = -1920652437;
int zero = 0;
signed char var_17 = (signed char)-23;
signed char var_18 = (signed char)10;
int var_19 = -1603454315;
long long int var_20 = -2941552194187614529LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
