#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 2800940927867375167ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 3260328139922268421ULL;
int var_11 = 1849382057;
unsigned short var_13 = (unsigned short)42917;
long long int var_15 = 5935474354802141292LL;
int zero = 0;
unsigned int var_17 = 3917943087U;
unsigned long long int var_18 = 16334234347892068971ULL;
_Bool var_19 = (_Bool)0;
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
