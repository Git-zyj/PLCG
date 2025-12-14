#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2274084565394650012ULL;
long long int var_7 = 5421533175956746124LL;
signed char var_8 = (signed char)-25;
unsigned long long int var_10 = 1741785386860250537ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = -3209762281531098431LL;
unsigned long long int var_13 = 724570929531604320ULL;
short var_14 = (short)13718;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
