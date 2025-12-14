#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1373311346U;
long long int var_11 = 1445790663397644462LL;
unsigned int var_13 = 194664485U;
unsigned char var_15 = (unsigned char)152;
int zero = 0;
unsigned long long int var_16 = 2693768317839176980ULL;
short var_17 = (short)28706;
int var_18 = -265643362;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
