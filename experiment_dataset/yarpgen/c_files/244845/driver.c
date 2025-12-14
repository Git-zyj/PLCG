#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3050822569U;
_Bool var_5 = (_Bool)1;
int var_11 = -1119949013;
long long int var_13 = -2771354490893768888LL;
unsigned long long int var_18 = 15774363111009362461ULL;
int zero = 0;
long long int var_19 = -801599686873813966LL;
signed char var_20 = (signed char)87;
_Bool var_21 = (_Bool)1;
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
