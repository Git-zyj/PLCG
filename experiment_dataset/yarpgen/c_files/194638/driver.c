#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4761949470620691706LL;
unsigned int var_8 = 1917295332U;
_Bool var_11 = (_Bool)1;
unsigned short var_14 = (unsigned short)1882;
int var_17 = 828234463;
int zero = 0;
long long int var_20 = 5948764765760364532LL;
signed char var_21 = (signed char)-19;
short var_22 = (short)32633;
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
