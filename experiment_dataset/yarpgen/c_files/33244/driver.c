#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5004139669739407329ULL;
short var_2 = (short)1808;
_Bool var_4 = (_Bool)1;
short var_7 = (short)-5159;
long long int var_8 = 2140793618213147695LL;
unsigned long long int var_10 = 11590365198143384166ULL;
long long int var_13 = -5135054039051960363LL;
unsigned int var_14 = 1902324256U;
int zero = 0;
long long int var_15 = 2964726159262123475LL;
long long int var_16 = -2616849153238733784LL;
long long int var_17 = -774117018185029763LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
