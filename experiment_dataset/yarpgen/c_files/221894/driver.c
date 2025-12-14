#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 320924729;
short var_14 = (short)21381;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)119;
int zero = 0;
long long int var_19 = 3879500470631067175LL;
long long int var_20 = -3558682915739270774LL;
unsigned long long int var_21 = 16419695185253729831ULL;
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
