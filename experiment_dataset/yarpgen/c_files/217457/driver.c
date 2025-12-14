#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33125;
unsigned int var_4 = 1081544879U;
short var_10 = (short)-15038;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_14 = 6675251904729903426LL;
long long int var_15 = -7982655165823526690LL;
unsigned int var_16 = 1661418841U;
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
