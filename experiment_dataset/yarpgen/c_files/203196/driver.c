#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3491546464907484730LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 14106411609159204024ULL;
int var_9 = 184804136;
long long int var_10 = -5146152906880872629LL;
int zero = 0;
unsigned int var_14 = 2831163104U;
signed char var_15 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
