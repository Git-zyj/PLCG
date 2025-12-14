#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)25901;
long long int var_12 = -6360108886828513158LL;
unsigned char var_13 = (unsigned char)72;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_20 = 2251913788767928897LL;
short var_21 = (short)-3326;
long long int var_22 = -7764481414849617266LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
