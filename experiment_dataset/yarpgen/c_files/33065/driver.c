#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2839537518U;
unsigned int var_2 = 225355540U;
unsigned char var_3 = (unsigned char)250;
_Bool var_4 = (_Bool)0;
unsigned int var_9 = 2374346699U;
int zero = 0;
long long int var_13 = 5553962347378369952LL;
signed char var_14 = (signed char)3;
unsigned int var_15 = 2797923405U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
