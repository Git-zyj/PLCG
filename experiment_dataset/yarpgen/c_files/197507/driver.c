#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 239192728U;
unsigned int var_2 = 1524625593U;
unsigned long long int var_3 = 15740732249589641610ULL;
long long int var_9 = 5095605017214160057LL;
short var_10 = (short)-31293;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 9415497781065839929ULL;
int var_20 = 317098992;
unsigned short var_21 = (unsigned short)45262;
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
