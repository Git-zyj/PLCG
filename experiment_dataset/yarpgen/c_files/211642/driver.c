#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)32;
unsigned int var_4 = 3955114926U;
long long int var_5 = -3688714178825360287LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 12390027787093964695ULL;
unsigned int var_10 = 4004106240U;
unsigned long long int var_12 = 15815632805899022712ULL;
unsigned char var_13 = (unsigned char)223;
int zero = 0;
unsigned long long int var_15 = 11716348678273851615ULL;
unsigned char var_16 = (unsigned char)78;
long long int var_17 = 3671277242056832438LL;
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
