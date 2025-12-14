#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8348614850427784574ULL;
unsigned char var_1 = (unsigned char)232;
unsigned long long int var_4 = 14267781460880266304ULL;
unsigned int var_9 = 826108617U;
_Bool var_11 = (_Bool)0;
long long int var_13 = -4099736518106672733LL;
int zero = 0;
unsigned int var_14 = 27632954U;
short var_15 = (short)29106;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
