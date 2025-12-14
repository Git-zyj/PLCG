#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)25712;
unsigned int var_8 = 1149115199U;
_Bool var_12 = (_Bool)1;
unsigned char var_16 = (unsigned char)206;
int zero = 0;
long long int var_18 = 536127579040977708LL;
int var_19 = -1150392194;
void init() {
}

void checksum() {
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
