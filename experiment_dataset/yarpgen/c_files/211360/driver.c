#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 4205982328U;
int var_4 = 275761352;
unsigned int var_11 = 1730394393U;
int zero = 0;
unsigned short var_13 = (unsigned short)2167;
unsigned int var_14 = 4040486552U;
unsigned int var_15 = 3067393070U;
long long int var_16 = -1118591582016471453LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
