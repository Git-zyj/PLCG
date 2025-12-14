#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)59306;
unsigned int var_3 = 3320368957U;
long long int var_6 = -5258299932773500108LL;
long long int var_7 = 7328625252192764227LL;
unsigned char var_9 = (unsigned char)37;
unsigned char var_12 = (unsigned char)172;
long long int var_16 = -8674861000500814693LL;
long long int var_18 = 8855320806146304348LL;
int zero = 0;
unsigned int var_20 = 1012748168U;
unsigned long long int var_21 = 12988788801829546284ULL;
unsigned int var_22 = 1007663381U;
short var_23 = (short)10182;
unsigned int var_24 = 953530496U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
