#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2210899273U;
unsigned int var_4 = 3072587031U;
_Bool var_5 = (_Bool)1;
long long int var_8 = -20448291485969852LL;
short var_14 = (short)6602;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-39;
_Bool var_17 = (_Bool)0;
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
