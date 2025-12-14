#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 2131795794;
_Bool var_4 = (_Bool)1;
int var_9 = -235602585;
unsigned short var_13 = (unsigned short)1530;
int var_15 = 525115351;
int var_19 = -724096206;
int zero = 0;
long long int var_20 = 844249530207508560LL;
int var_21 = 593650063;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
