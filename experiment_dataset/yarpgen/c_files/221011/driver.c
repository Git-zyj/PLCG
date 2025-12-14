#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8287361880361606563LL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-49;
unsigned long long int var_3 = 16470040486431829678ULL;
unsigned int var_4 = 1740483526U;
int var_6 = -1289237931;
unsigned long long int var_7 = 2224294683633577906ULL;
int var_8 = -66544226;
unsigned long long int var_10 = 12179394536414394068ULL;
unsigned int var_13 = 3573969165U;
int var_14 = -223235509;
int zero = 0;
unsigned int var_15 = 1924827613U;
unsigned short var_16 = (unsigned short)54625;
unsigned long long int var_17 = 7811018692449935235ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
