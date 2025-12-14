#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 877641249;
short var_4 = (short)1707;
unsigned int var_8 = 1940029666U;
int var_9 = 1191509650;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -8170780510220865987LL;
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
