#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_7 = 13380362868685849551ULL;
unsigned short var_9 = (unsigned short)30768;
unsigned int var_10 = 2899797793U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 16029436235813183606ULL;
long long int var_13 = 6129367595048028082LL;
unsigned long long int var_17 = 3747586165052024152ULL;
unsigned char var_18 = (unsigned char)94;
int zero = 0;
unsigned short var_19 = (unsigned short)34126;
unsigned char var_20 = (unsigned char)34;
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
