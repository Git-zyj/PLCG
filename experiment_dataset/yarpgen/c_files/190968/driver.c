#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2652858470U;
int var_5 = 1337739180;
unsigned int var_6 = 468340256U;
short var_10 = (short)31198;
unsigned int var_11 = 2542904430U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2464495121U;
void init() {
}

void checksum() {
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
