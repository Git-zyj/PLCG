#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 822051150U;
unsigned long long int var_2 = 6262059005494571508ULL;
signed char var_7 = (signed char)93;
unsigned char var_12 = (unsigned char)140;
long long int var_13 = 6725997384584449600LL;
int zero = 0;
long long int var_18 = 4720346007667022117LL;
long long int var_19 = 7552581934561992127LL;
unsigned long long int var_20 = 13031779467750142804ULL;
long long int var_21 = -1683876663637348294LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
