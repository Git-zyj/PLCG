#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)112;
long long int var_4 = 470440068248096306LL;
unsigned int var_7 = 4107958627U;
unsigned int var_9 = 1827032182U;
unsigned long long int var_11 = 15372011409991300574ULL;
unsigned long long int var_12 = 13259988508398754260ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -6231825588692042696LL;
int var_17 = 722647382;
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
