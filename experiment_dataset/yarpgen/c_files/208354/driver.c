#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1495863800;
unsigned int var_1 = 1678338150U;
_Bool var_2 = (_Bool)0;
short var_4 = (short)8964;
_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 17307067675513996992ULL;
short var_11 = (short)14983;
unsigned short var_12 = (unsigned short)59349;
int zero = 0;
unsigned long long int var_16 = 2967232459546714327ULL;
unsigned int var_17 = 3917194833U;
void init() {
}

void checksum() {
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
