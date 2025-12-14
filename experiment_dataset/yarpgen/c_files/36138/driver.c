#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14791943397466091060ULL;
unsigned long long int var_5 = 15727884997415372050ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 1040897876U;
int zero = 0;
short var_18 = (short)-29232;
unsigned long long int var_19 = 10703665828822641099ULL;
void init() {
}

void checksum() {
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
