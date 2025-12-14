#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-4587;
unsigned short var_11 = (unsigned short)23368;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 5735836953609825716ULL;
unsigned int var_15 = 750317041U;
unsigned short var_16 = (unsigned short)9187;
short var_17 = (short)29513;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
