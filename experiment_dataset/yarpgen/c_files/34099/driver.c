#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3909266612U;
short var_8 = (short)-14801;
unsigned int var_9 = 2553831563U;
int var_11 = 1520954183;
long long int var_12 = 4596737766977444324LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -3623573093832393490LL;
long long int var_16 = 4902163870171330284LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
