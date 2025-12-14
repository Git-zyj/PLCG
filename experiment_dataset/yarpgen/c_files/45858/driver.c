#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 182745243370132172LL;
_Bool var_7 = (_Bool)0;
long long int var_10 = -2939830175999032690LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 17454288222879411358ULL;
unsigned int var_17 = 2864993662U;
unsigned short var_18 = (unsigned short)14553;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
