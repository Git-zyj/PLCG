#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
unsigned short var_1 = (unsigned short)63575;
unsigned short var_2 = (unsigned short)7893;
signed char var_4 = (signed char)-63;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = -8993450003164350572LL;
long long int var_12 = 1273195608488981957LL;
long long int var_13 = 534048567115315970LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
