#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
unsigned int var_3 = 1266861903U;
unsigned int var_4 = 75598615U;
short var_5 = (short)-29605;
_Bool var_10 = (_Bool)1;
long long int var_11 = -2798305065624152153LL;
int var_12 = -619217071;
int zero = 0;
unsigned long long int var_15 = 16088543819697006622ULL;
unsigned int var_16 = 4167331377U;
unsigned int var_17 = 346761957U;
void init() {
}

void checksum() {
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
