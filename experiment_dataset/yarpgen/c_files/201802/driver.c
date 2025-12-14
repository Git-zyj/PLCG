#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4259624389U;
long long int var_10 = 2351078965859997267LL;
signed char var_11 = (signed char)18;
int var_12 = -1418528910;
short var_13 = (short)16153;
unsigned long long int var_17 = 5931442596409783284ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)38558;
_Bool var_20 = (_Bool)0;
long long int var_21 = -5831096626766740964LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
