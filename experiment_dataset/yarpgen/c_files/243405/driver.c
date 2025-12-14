#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8978642437930267694LL;
int var_5 = 397492968;
unsigned int var_7 = 1326739393U;
int zero = 0;
unsigned long long int var_10 = 13373231709369131102ULL;
unsigned int var_11 = 2718241664U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
