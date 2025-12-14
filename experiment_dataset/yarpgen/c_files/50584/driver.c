#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)225;
unsigned int var_5 = 2341401937U;
long long int var_9 = -7242680412507210717LL;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)220;
_Bool var_16 = (_Bool)0;
long long int var_18 = 8548683247155950870LL;
int zero = 0;
unsigned long long int var_19 = 3463474631102109055ULL;
unsigned long long int var_20 = 16968367791566004253ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
