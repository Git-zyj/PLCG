#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -803436769;
unsigned long long int var_4 = 1205292390594488628ULL;
int var_5 = -2003014697;
unsigned char var_7 = (unsigned char)170;
int var_9 = 172021163;
int zero = 0;
unsigned int var_10 = 3680784986U;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
