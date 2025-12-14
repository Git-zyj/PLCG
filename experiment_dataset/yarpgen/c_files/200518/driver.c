#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25919;
int var_4 = 1030847337;
int var_6 = -2011197723;
_Bool var_11 = (_Bool)1;
long long int var_13 = 6745285212651913404LL;
unsigned long long int var_16 = 9346544257186610278ULL;
int zero = 0;
int var_17 = -788369203;
unsigned int var_18 = 2851985691U;
unsigned short var_19 = (unsigned short)19463;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
