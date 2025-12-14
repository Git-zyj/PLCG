#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1197257357;
unsigned long long int var_3 = 15179120795377923449ULL;
long long int var_5 = 8876370369499983656LL;
signed char var_6 = (signed char)-37;
int var_10 = -207619293;
unsigned long long int var_11 = 14622000155091309066ULL;
int zero = 0;
unsigned long long int var_12 = 8616133803397555645ULL;
unsigned long long int var_13 = 7358510868705719456ULL;
unsigned int var_14 = 1697146813U;
signed char var_15 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
