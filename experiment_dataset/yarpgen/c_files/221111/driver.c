#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1976051172U;
_Bool var_13 = (_Bool)0;
signed char var_16 = (signed char)-49;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)21;
short var_19 = (short)5425;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
