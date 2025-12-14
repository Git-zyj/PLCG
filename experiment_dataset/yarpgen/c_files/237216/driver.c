#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8873168232546834663LL;
long long int var_6 = 8150582263145389137LL;
long long int var_7 = 1987213511552151685LL;
unsigned char var_12 = (unsigned char)161;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 4573512278910428195LL;
signed char var_20 = (signed char)-66;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
