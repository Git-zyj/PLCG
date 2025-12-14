#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_12 = (_Bool)0;
short var_13 = (short)25673;
int var_15 = -303194675;
int zero = 0;
unsigned long long int var_20 = 10760089978302370222ULL;
short var_21 = (short)12326;
unsigned long long int var_22 = 14306379280230927497ULL;
unsigned int var_23 = 1035268630U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
