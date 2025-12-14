#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-112;
unsigned int var_5 = 1352118523U;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)11;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2730956597U;
unsigned int var_20 = 1437660572U;
signed char var_21 = (signed char)-66;
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
