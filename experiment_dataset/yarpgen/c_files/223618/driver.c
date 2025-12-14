#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13982012086942375005ULL;
long long int var_1 = 3078084831479303132LL;
long long int var_3 = 4705953622698486401LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 4048776727613116271ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_11 = 15509138699461681206ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)20349;
unsigned int var_14 = 2140563356U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
