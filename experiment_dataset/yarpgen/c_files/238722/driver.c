#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10500298490180225719ULL;
int var_3 = -645411077;
signed char var_4 = (signed char)-58;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-13161;
long long int var_11 = 7527839503917684045LL;
long long int var_12 = 8393997364880201183LL;
signed char var_14 = (signed char)52;
int zero = 0;
unsigned long long int var_15 = 1381585298148818081ULL;
signed char var_16 = (signed char)-63;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)38730;
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
