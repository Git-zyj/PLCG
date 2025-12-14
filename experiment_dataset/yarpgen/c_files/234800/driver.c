#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4342037865948905557ULL;
unsigned long long int var_2 = 12079413081421416042ULL;
int var_5 = 674544421;
signed char var_7 = (signed char)51;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 11598843992061952058ULL;
unsigned int var_12 = 1110413600U;
unsigned int var_13 = 3037731265U;
long long int var_14 = 605591530190686423LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
