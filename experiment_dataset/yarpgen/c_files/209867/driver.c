#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7156881530065990352LL;
_Bool var_3 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_14 = (short)-13067;
unsigned int var_15 = 2993164681U;
long long int var_16 = 3697767614307228125LL;
unsigned char var_17 = (unsigned char)176;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
