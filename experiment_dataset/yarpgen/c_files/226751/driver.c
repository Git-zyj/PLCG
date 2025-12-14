#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 119257660;
unsigned int var_6 = 2349479916U;
int var_7 = -917560815;
signed char var_8 = (signed char)-118;
unsigned long long int var_12 = 6200214495104394411ULL;
int zero = 0;
unsigned int var_13 = 2562281588U;
long long int var_14 = -5802615949233811230LL;
void init() {
}

void checksum() {
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
