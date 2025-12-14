#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)0;
long long int var_4 = -2599606995380906238LL;
long long int var_7 = -4471865110878001539LL;
unsigned short var_8 = (unsigned short)11963;
unsigned int var_11 = 285707071U;
long long int var_12 = -3516066127842487020LL;
int zero = 0;
unsigned long long int var_15 = 17965096393276198218ULL;
unsigned long long int var_16 = 13182311677368389599ULL;
unsigned short var_17 = (unsigned short)14388;
unsigned short var_18 = (unsigned short)28533;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
