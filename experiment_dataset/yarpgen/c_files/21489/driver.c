#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3214524908U;
unsigned char var_3 = (unsigned char)179;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3648959734U;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 4509846419529855316ULL;
unsigned long long int var_16 = 13889422211649795661ULL;
unsigned long long int var_17 = 8902975734527064296ULL;
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
