#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -126420832;
short var_3 = (short)3040;
short var_6 = (short)30986;
unsigned long long int var_8 = 6351087320657244571ULL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1088474656U;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 1473938853U;
signed char var_20 = (signed char)89;
unsigned int var_21 = 900461762U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
