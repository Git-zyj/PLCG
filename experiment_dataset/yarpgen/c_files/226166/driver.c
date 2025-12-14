#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17527;
long long int var_2 = 2338601373652502722LL;
long long int var_3 = 6726882174090522177LL;
short var_5 = (short)-7588;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 2593167940U;
unsigned int var_9 = 719928009U;
int zero = 0;
unsigned int var_10 = 3180140646U;
unsigned short var_11 = (unsigned short)33083;
int var_12 = -1145283423;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
