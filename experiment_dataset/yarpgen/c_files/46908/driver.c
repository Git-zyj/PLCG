#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3813342813U;
unsigned long long int var_5 = 12098770043158440557ULL;
long long int var_11 = -2593109436690441245LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = 1004816855;
unsigned long long int var_15 = 17793521821886928124ULL;
unsigned long long int var_16 = 6214105736784670755ULL;
long long int var_17 = -3388129441222487015LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
