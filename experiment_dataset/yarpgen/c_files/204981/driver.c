#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -703306298;
unsigned int var_7 = 227545077U;
unsigned int var_9 = 3412260964U;
signed char var_10 = (signed char)-15;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)3489;
int zero = 0;
signed char var_20 = (signed char)-39;
signed char var_21 = (signed char)123;
unsigned long long int var_22 = 5922337674613313994ULL;
long long int var_23 = 3116131188793349712LL;
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
