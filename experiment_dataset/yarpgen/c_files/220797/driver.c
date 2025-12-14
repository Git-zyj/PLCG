#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2600014520U;
int var_4 = -1695290186;
unsigned long long int var_6 = 17097029440275623895ULL;
unsigned int var_7 = 757893285U;
long long int var_9 = -5205314348283102617LL;
int var_13 = 426105527;
int zero = 0;
int var_15 = -311737195;
signed char var_16 = (signed char)-32;
void init() {
}

void checksum() {
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
