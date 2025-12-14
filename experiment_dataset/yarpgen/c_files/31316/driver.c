#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1407537543;
_Bool var_1 = (_Bool)1;
long long int var_3 = 2104585306693755085LL;
signed char var_4 = (signed char)41;
unsigned int var_6 = 1828972927U;
signed char var_9 = (signed char)125;
short var_11 = (short)-5504;
unsigned long long int var_13 = 12850112634427053438ULL;
int zero = 0;
long long int var_14 = -7537194421466071518LL;
unsigned int var_15 = 2096586734U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
